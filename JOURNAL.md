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
