#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "driver/i2s_std.h"
#include "esp_wn_iface.h"
#include "esp_wn_models.h"
#include "esp_mn_iface.h"
#include "esp_mn_models.h"
#include "esp_mn_speech_commands.h"
#include "model_path.h"
#include "tinyusb.h"
#include "class/hid/hid_device.h"

#define LED_PIN 11
#define MIC_SD_PIN 4
#define MIC_SCK_PIN 5
#define MIC_WS_PIN 6

// set as keyboard for USB HID
static const uint8_t hid_desc[] = {TUD_HID_REPORT_DESC_KEYBOARD()};
// set dongle specs
static const char *usb_str[] = {(char[]){0x09, 0x04}, "TheAbsoluteMin", "EchoKey", "001"};
uint8_t const *tud_hid_descriptor_report_cb(uint8_t i) {return hid_desc;}
uint16_t tud_hid_get_report_cb(uint8_t i, uint8_t r, hid_report_type_t t, uint8_t *b, uint16_t l) {return 0;}
void tud_hid_set_report_cb(uint8_t i, uint8_t r, hid_report_type_t t, uint8_t const *b, uint16_t s) {}

// type out text or passwords
static void type_text(const char *text) {
    uint8_t const table[128][2] = {HID_ASCII_TO_KEYCODE};
    for (int i=0; text[i]; i++) {
        uint8_t key[6] = {table[(uint8_t)text[i]][1]};
        uint8_t mod = table[(uint8_t)text[i]][0] ? KEYBOARD_MODIFIER_LEFTSHIFT : 0;
        tud_hid_keyboard_report(0, mod, key);
        vTaskDelay(pdMS_TO_TICKS(15));
        tud_hid_keyboard_report(0,0,NULL);
        vTaskDelay(pdMS_TO_TICKS(15));
    }
}

// send macros
static void send_macro(uint8_t mod, uint8_t keycode) {
    uint8_t key[6] = {keycode};
    tud_hid_keyboard_report(0, mod, key);
    vTaskDelay(pdMS_TO_TICKS(15));
    tud_hid_keyboard_report(0,0,NULL);
    vTaskDelay(pdMS_TO_TICKS(15));
}

// main code
void app_main(void) {
    // initialize LED
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    // initialize USB
    tinyusb_config_t tusb_cfg = {.string_descriptor = usb_str, .string_descriptor_count=4};
    tinyusb_driver_install(&tusb_cfg);
    // sinitialize microphone
    i2s_chan_handle_t mic;
    i2s_chan_config_t chan_cfg = I2S_CHANNEL_DEFAULT_CONFIG(I2S_NUM_0, I2S_ROLE_MASTER);
    i2s_new_channel(&chan_cfg, NULL, &mic);
    i2s_std_config_t std_cfg = {
        .clk_cfg = I2S_STD_CLK_DEFAULT_CONFIG(16000),
        .slot_cfg = I2S_STD_PHILIPS_SLOT_DEFAULT_CONFIG(I2S_DATA_BIT_WIDTH_32BIT, I2S_SLOT_MODE_MONO),
        .gpio_cfg = {.mclk=I2S_GPIO_UNUSED, .bclk=MIC_SCK_PIN, .ws=MIC_WS_PIN, .dout=I2S_GPIO_UNUSED, .din=MIC_SD_PIN},
    };
    std_cfg.slot_cfg.slot_mask = I2S_STD_SLOT_LEFT;
    i2s_channel_init_std_mode(mic, &std_cfg);
    i2s_channel_enable(mic);
    // set up WakeNet AI model for wake up command
    srmodel_list_t *models = esp_srmodel_init("model");
    char *wn_name = esp_srmodel_filter(models, ESP_WN_PREFIX, NULL);
    esp_wn_iface_t *wakenet = (esp_wn_iface_t *)esp_wn_handle_from_name(wn_name);
    model_iface_data_t *wn_data = wakenet->create(wn_name, DET_MODE_90);
    // set up the MultiNet AI model for voice commands
    char *mn_name = esp_srmodel_filter(models, ESP_MN_PREFIX, ESP_MN_ENGLISH);
    esp_mn_iface_t *multinet = (esp_mn_iface_t *)esp_mn_handle_from_name(mn_name);
    model_iface_data_t *mn_data = multinet->create(mn_name, 5760);
    // set up voice commands
    esp_mn_commands_clear();
    esp_mn_commands_add(1, "login google");
    esp_mn_commands_add(2, "open new tab");
    esp_mn_commands_update();
    // microphone loop
    int samples = wakenet->get_samp_chunksize(wn_data);
    int32_t *raw = malloc(samples*4);
    int16_t *pcm = malloc(samples*2);
    size_t read;
    bool awake = false; // track whether to listen for voice commands to save power
    while (1) {
        i2s_channel_read(mic, raw, samples*4, &read, portMAX_DELAY);
        for (int i = 0; i < samples; i++) pcm[i] = raw[i] >> 14;
        // listen for wake command only to save power
        if (!awake) {
            if (wakenet->detect(wn_data, pcm) == WAKENET_DETECTED) {
                awake = true;
                gpio_set_level(LED_PIN, 1);
                multinet->clean(mn_data);            
            }
        } else {
            // listen for voice commands once woken
            esp_mn_state_t st = multinet->detect(mn_data, pcm);
            if (st == ESP_MN_STATE_DETECTED) {
                esp_mn_results_t *res = multinet->get_results(mn_data);
                int id = res->command_id[0];
                // check different commands
                if (id==1) {
                    // login google
                    type_text("example@gmail.com\n");
                    vTaskDelay(pdMS_TO_TICKS(1500));
                    type_text("password\n");
                } else if (id==2) {
                    // open new tab
                    send_macro(KEYBOARD_MODIFIER_LEFTCTRL, HID_KEY_T);
                }

                awake = false;
                gpio_set_level(LED_PIN, 0);
            } else if (st == ESP_MN_STATE_TIMEOUT) {
                awake = false;
                gpio_set_level(LED_PIN, 0);
            }
        }
    }
}