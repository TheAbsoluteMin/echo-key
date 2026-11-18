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
