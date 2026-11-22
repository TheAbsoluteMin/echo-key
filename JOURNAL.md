---
title: "EchoKey"
author: "TheAbsoluteMin"
description: "A Bluetooth smart pen that transforms handwritten notes into digital text."
created_at: "2026-06-04"
---

# Log 1: 6.4.2026 - My 1st devlog - Beginning of a Hackpad

Timelapse <a href="https://lapse.hackclub.com/timelapse/FC_v2vy3fczr">link</a>.

** Please note that this [Devlog](https://stardance.hackclub.com/projects/6806) was imported from Stardance. **

Hello! This is the beginning of…

… my Hack Club journey

… my Stardance journey

… my Hackpad journey

As it was my first time using KiCad and I had ambitious plans, I ran into many problems including pinout conflicts and some trouble with wiring and footprints for each symbol. However, after roughly 2 hours of designing the schematics and changing my button matrix from 4x4 to 3x3 to 3x3 that included a rotary encoder switch, I updated my PCB to see my progress. I have yet to discover a purpose for my hackpad…

<img width="1429" height="860" alt="image" src="https://github.com/user-attachments/assets/77fe45d8-8d73-4d84-919e-e70d82506270" />
<img width="787" height="689" alt="image" src="https://github.com/user-attachments/assets/6c662739-81da-466c-a77d-2c0b48057868" />

Until then, TheAbsoluteMin out!

**Total time spent: 1.8 hours**

---

# Log 2: 6.5.2026 - Adjusting Schematics

Timelapse Part 1 <a href="https://lapse.hackclub.com/timelapse/jnHnmRvD6uzY">link</a>.
Timelapse Part 2 <a href="https://lapse.hackclub.com/timelapse/bM4HrjNb66xa">link</a>.

** Please note that this [Devlog](https://stardance.hackclub.com/projects/6806) was imported from Stardance. **

Hi again! After some research and reading, I decided to update my schematics for my hackpad. This included using global variables to replace the messy wiring I had previously for easy future reference.

I have always been fascinated with backlit LEDs, so I decided to implement them in my design. However, I ran into many symbol and footprint library conflicts along the way. Since I did not have the actual switches nor LEDs, I had to rely on numerous inconsistent old references. In the end, I ended up using the original switch footprint!

After some time thinking, I decided to use a different library which promised a different approach. I changed the LEDs’ footprints (again!). Unrelated but important, I decided to follow standard schematics wiring for power global variables so I could translate the increased wiring thickness for the LED powerlines to the PCB.

<img width="818" height="690" alt="image" src="https://github.com/user-attachments/assets/ad6d7d40-b607-40f8-bce3-13bf88515451" />

Until then, TheAbsoluteMin out!

**Total time spent: 2.5 hours**

---

# Log 3: 6.6.2026 - Hackpad PCB Design

Timelapse <a href="https://lapse.hackclub.com/timelapse/R-Lok60rAeRo">link</a>.

** Please note that this [Devlog](https://stardance.hackclub.com/projects/6806) was imported from Stardance. **

Hello! Today, in additon to adding a passive buzzer to my hackpad, I spent a good portion of time working on the PCB design and routing. It was especially challenging and time consuming as I had to determine the routing for so many components!

With that, I am pleased to share with you that I have decided on the purpose of my hackpad…

…I am hoping to turn it into a custom Pocket Operator!

Now, I just have to figure out how to solve the 32 errors and 31 warnings the KiCad DRC flagged…

<img width="598" height="720" alt="image" src="https://github.com/user-attachments/assets/baf72081-c54f-4d8e-b5c2-26185a0caa4b" />

Until then, TheAbsoluteMin out!

**Total time spent: 3.5 hours**

---

# Log 4: 6.7.2026 - Minor PCB Parts Adjustments

Timelapse <a href="https://lapse.hackclub.com/timelapse/TkbHmnJH4lMN">link</a>.

** Please note that this [Devlog](https://stardance.hackclub.com/projects/6806) was imported from Stardance. **

Hi! After referencing passive buzzer guides I realized that I needed resistors, not diodes, for it, so I updated the schematics and PCB. I figured out the errors were simply because of the LED holes, which were made by default of the LED library, so after dismissing them, I was ready to move on to designing the hackpad case!

<img width="492" height="592" alt="image" src="https://github.com/user-attachments/assets/05691821-35e1-4611-b7c4-de970f52da3e" />

Until then, TheAbsoluteMin out!

**Total time spent: 1 hour**

---

# Log 5: 6.9.2026 - Hackpad CAD Design

Timelapse <a href="https://lapse.hackclub.com/timelapse/mBvQilO03y46">link</a>.

** Please note that this [Devlog](https://stardance.hackclub.com/projects/6806) was imported from Stardance. **

It was my first time using Autodesk Fusion for CAD, and I immediately learned that the tools greatly differed from Tinkercad. After about 4 hours, I finally began to adapt to the new tools, and I almost completed my hackpad case! I still need to figure out how to add 16mm screws in a case only about 14mm tall… 

<img width="1357" height="709" alt="image" src="https://github.com/user-attachments/assets/bb9c1f14-0e05-4809-87c4-e1f8c6f25221" />

Until then, TheAbsoluteMin out!

**Total time spent: 4.3 hours**

---

# Log 6: 11.14.2026 - Schematics Remake!

Timelapse <a href="https://lapse.hackclub.com/timelapse/yJHmyyOfqdHM">link</a>.

After almost 5 months, I have finally revisited my macropad project! This time, I have a new idea, which reimagines the macropad. Instead of carrying around a sizable boxy macropad, you can keep a tiny, sleek dongle inserted into your computer. Instead of spending a couple seconds figuring out which key to press, you can simply speak out your desired macro in milliseconds. Instead of adding another physical key to your macropad for every new macro, you can effortlessly code a new one without changing the hardware.

Now, I will introduce to you the Version 2 of my macropad: EchoKey.

In a single sentence, EchoKey is a compact USB dongle PC buddy for your everyday voice commands.

For the new schematics and PCB, I am using EasyEDA Pro. It took me a while to set up the schematics since I also had to find the exact LCSC part for each component, so ordering the PCB and PCB assembly will be seamless later.

I started with the ESP32-S3FH4R2 MCU, which I chose because of its unique specifications. Its 2 MB of embedded PSRAM is a great buffer for running a local tiny AI to recognize and buffer voice commands from a MEMS I2S microphone (which I will include later). Its 4 MB of embedded flash is also great for storing many macros. With built-in USB Human Interface Device (USB HID), the MCU can send the macro tied to the voice command to the computer via USB-A.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/2f08db80-99fd-4748-bed8-eccb7347894c" />
<img width="1819" height="989" alt="image" src="https://github.com/user-attachments/assets/3fbb4068-4404-438c-96de-2d2cba1006a0" />

After placing the chip, I used the official reference schematics to begin placing the required passives.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/275e1535-6eee-4c4a-9e8d-d6c1344d351c" />

Since I did not need the WiFi/Bluetooth capabilities, I left the antenna pin (LNA_IN) floating.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/4cd76d10-6ed7-41e0-b73b-0dfd9176f6e7" />

I began finding the capacitors for the power rails.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/a17b9495-13ea-4d96-b96c-c1ee71e79fc7" />

Then, I placed the 40MHz crystal oscillator for the MCU.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/22864b67-5430-440d-bd1f-5a2caa8cd4e4" />

I made sure to add a button circuit and pull up resistors on the CHIP_PU and GPIO0 Boot pins.

<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/b2e471a8-c67f-4af3-85e9-bc2ed27ccb1c" />
<img width="1813" height="985" alt="image" src="https://github.com/user-attachments/assets/e0bb8551-ad8f-49c1-a864-036e4440d273" />

**Total time spent: 1.7 hours**

---

# Log 7: 11.15.2026 - Finalizing Schematics

Timelapse <a href="https://lapse.hackclub.com/timelapse/uQCoOLMX6Ctl">link</a>.

I read through the Schematic Checklist, and I first made sure to isolate the bootstrapping pins.

<img width="1824" height="977" alt="image" src="https://github.com/user-attachments/assets/5ff7bef6-47ba-4b66-88d8-35b632ea2ac1" />

Then, I began to build the power blocks. In order to minimize my dongle's size, I used the USB-A male part. I also included the USBLC6-2SC6 ESD protection.

<img width="1824" height="977" alt="image" src="https://github.com/user-attachments/assets/27472a98-8246-4115-8396-90ddd7b5de23" />

The data sheet recommended series resistors on the USB data lines, so I added 22 ohms resistors.

<img width="1824" height="977" alt="image" src="https://github.com/user-attachments/assets/9aa15a14-0ca5-4070-aa6f-5e30746ff5de" />
<img width="1824" height="977" alt="image" src="https://github.com/user-attachments/assets/379218a0-1b4b-4701-880a-4273e17ad91f" />

After that, I needed to route the 3V3 LDO. I checked the datasheet on LCSC for the AP2112K-3.3TRG1.

<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/cedc32e5-46f8-4b8f-bc17-1520cfcb294a" />
<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/2e0a9fab-c5de-4e46-8cb1-9c43b82da912" />

I wired the LDO accordingly on my schematics.

<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/3876ad85-9640-4ff7-9293-d6be9f5f090e" />

Then, I went searching for a microphone that would capture the voice commands for my dongle.

<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/ef36bfc3-84c6-42d4-a73f-abad92693bd9" />

I settled on the ICS-43432 I2S MEMS microphone. I wanted to use the newer ICS-43434 one, but despite being cheaper, it did not allow for economic PCBA.

<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/f50106ef-7692-4036-af09-3f267fd57fce" />

After finding the example circuit diagram from the datas sheet, I routed the microphone.

<img width="1784" height="984" alt="image" src="https://github.com/user-attachments/assets/33a9f2e0-06f6-4cd3-90c2-4bc3c7a49f3d" />
<img width="1819" height="977" alt="image" src="https://github.com/user-attachments/assets/5ad786f7-a64e-4941-9bf0-4b0c2adff9a0" />

Since my dongle already used USB HID, I realized that it could also manage all my passwords! Thus, I added the ATECC608C cryptographic chip, which will securely store keys to protect passwords. With that, I could simply tell my dongle to log into multiple sites for me!

<img width="1819" height="977" alt="image" src="https://github.com/user-attachments/assets/1efbfec6-e520-4f00-873f-7e38f118db3b" />

The data sheet on LCSC for the chip was actually outdated (it was an older model of the chip), so I had to download the data sheet from the JLCPCB part page. Still, there was no example circuit, so I visited the Microchip website for their sample circuit.

<img width="1819" height="977" alt="image" src="https://github.com/user-attachments/assets/ea10ae06-3edc-4f9d-b527-a8ff75ce9f03" />

I also referenced Adafruit's design as well to make sure I wired the chip correctly since Microchip's circuit design was a somewhat complicated and unnecessary for my purposes (they wired multiple cryptographic chips together while I only needed one).

<img width="1792" height="988" alt="image" src="https://github.com/user-attachments/assets/ed420010-2d91-483c-812b-dd3226c19a74" />

Finally, I wired an RGB LED that would signify that the dongle was working properly.

<img width="1792" height="988" alt="image" src="https://github.com/user-attachments/assets/2c6abffb-9506-42ec-828a-0dbe14dec368" />


**Total time spent: 2.8 hours**

---
