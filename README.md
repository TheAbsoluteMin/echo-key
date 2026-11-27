# EchoKey
A compact USB dongle PC buddy for your everyday voice commands.

<img width="1920" height="1080" alt="Full_EchoKey_Render" src="https://github.com/user-attachments/assets/248f5c21-5093-4615-a5a9-738974a85cc4" />
<img width="1920" height="1080" alt="Exploded_View_EchoKey_Render" src="https://github.com/user-attachments/assets/8ea763fd-86de-4567-a901-f0c06081d40f" />
<img width="1920" height="1080" alt="PCB_EchoKey_Render" src="https://github.com/user-attachments/assets/092ae6de-8c89-4dea-ad58-ea0c86fb9daa" />

## Introduction
EchoKey first started out as a traditional boxy macropad with keys and a rotary encoder. However, after almost five months since its initial creation, it has now been completely transformed. EchoKey reimagines the macropad into a sleek and more easily portable dongle. Instead of spending seconds to figure out which physical key to press, you talk to it with voice commands in order for the dongle to send macros to your device in only milliseconds. While keeping the same small form factor, you can program hundreds of macros, breaking free from the constraint of adding more buttons for more macros. With the ATECC608C-SSHDA-T cryptographic chip, EchoKey also opens up the possibility to store and secure passwords for numerous different sites with your voice!

## Features
### Hardware
- ESP32-S3FH4R2 MCU
- ICS-43432 I2S MEMS Microphone
- ATECC608C-SSHDA-T cryptographic security chip
- Compact USB-A integrated with the USBLC6-2SC6 ESD protection
- Clean power rails with the AP2112K-3.3TRG1 3.3 V LDO regulator
- Two tactile buttons for programming.
- Onboard status LED

### Software
- Onboard voice recognition
- Native USB HID support
- Versatile and large capacity usage from everyday macros to login credentials

## Schematics
<img width="1217" height="858" alt="image" src="https://github.com/user-attachments/assets/ebad9603-bab7-47f8-846c-88eeb16ee382" />

## PCB
EchoKey was designed with EasyEDA Pro.

2D View

<img width="1168" height="595" alt="image" src="https://github.com/user-attachments/assets/f31c1f43-2969-4b9d-a773-6f7788b83907" />
<img width="1192" height="630" alt="image" src="https://github.com/user-attachments/assets/ee74ed83-d15f-4e4e-aa90-bc6c29913c27" />

3D View

<img width="1212" height="586" alt="image" src="https://github.com/user-attachments/assets/60c03c33-9db8-4856-a244-bae3212a18ce" />
<img width="1218" height="566" alt="image" src="https://github.com/user-attachments/assets/157348a1-aac6-489b-aaf8-9a950ee753e0" />

### PCB Layers
Top Layer
  
<img width="1146" height="505" alt="image" src="https://github.com/user-attachments/assets/f6fef03a-8aba-42cd-b83c-22cc5291d435" />

Inner Layer 1

<img width="1155" height="530" alt="image" src="https://github.com/user-attachments/assets/5ec9f94c-92dc-4078-a242-1ec82047b115" />

Inner Layer 2

<img width="1158" height="527" alt="image" src="https://github.com/user-attachments/assets/60e03415-c090-4e26-a7eb-8754672d1f67" />

Bottom Layer

<img width="1162" height="546" alt="image" src="https://github.com/user-attachments/assets/4f1abfbb-0496-4694-863c-47bf5b985a81" />

### PCB Assembly
1. After ordering the EchoKey PCBA from JLCPCB, solder the USB-A component onto the PCB onto the marked end.

## CAD Case
3D model [link](https://cad.onshape.com/documents/e4c9730ebec5d1d041092811/w/5043915807800571eed6817e/e/91807bb1fb76b7eb880418f3?renderMode=0&uiState=6b076fba8c47a01ad8a7109b).

The case was designed with Onshape.

<img width="1191" height="557" alt="image" src="https://github.com/user-attachments/assets/a1e7915d-3c8f-4093-bcd5-2fc1799c1c94" />
<img width="1183" height="547" alt="image" src="https://github.com/user-attachments/assets/d17ab020-cad7-45f6-9218-ccd87530e775" />

### CAD Layers
Assembled Case

<img width="1012" height="572" alt="image" src="https://github.com/user-attachments/assets/5401c6d2-8ff1-4917-a1b2-3caba08ba945" />

Top Case

<img width="922" height="553" alt="image" src="https://github.com/user-attachments/assets/6432dc0f-2b4f-4bf9-a2c9-293b14b1ca95" />
<img width="900" height="572" alt="image" src="https://github.com/user-attachments/assets/025d0d32-38f9-4f7d-952a-d56a15fd72e8" />

Bottom Case

<img width="935" height="577" alt="image" src="https://github.com/user-attachments/assets/f1e3371d-8b81-4ce7-9c24-529a1c04f3e6" />
<img width="933" height="618" alt="image" src="https://github.com/user-attachments/assets/dd418e8d-7ac8-4d58-942a-1f10f777fa2f" />

### CAD Case Assembly
1. Place the PCB inside the bottom case.
2. Snap the top case on top of the bottom case as indicated by the flap openings.

## How To Use
1. Plug the EchoKey dongle into a USB-A port of your device.
2. Wake your dongle with your voice command, and watch it execute the command in real time.

## Firmware Logic: How It Works
1. ?

### Firmware Setup
?

## PCB Components BOM

| Part Name | Mfr. | Description | Package | LCSC# | Min Order Qty. | Mult | Order Qty. | Unit Price(USD) | Ext.Price(USD) | Product Link |
| --- | --- | --- | --- | --- | ---: | ---: | ---: | ---: | ---: | --- |
| CL05B104KO5NNNC | Samsung Electro-Mechanics | 100nF ±10% 16V Ceramic Capacitor X7R 0402 | - | C1525 | 100 | 100 | 100 | $0.0008 | $0.08 | [Link](https://www.lcsc.com/product-detail/C1525.html?spm=wm.mxq.bom.0.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| CL05A105KA5NQNC | Samsung Electro-Mechanics | 1uF ±10% 25V Ceramic Capacitor X5R 0402 | - | C52923 | 100 | 100 | 100 | $0.0026 | $0.26 | [Link](https://www.lcsc.com/product-detail/C52923.html?spm=wm.mxq.bom.1.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| CL10A106MA8NRNC | Samsung Electro-Mechanics | 10uF ±20% 25V Ceramic Capacitor X5R 0603 | - | C96446 | 20 | 20 | 20 | $0.0221 | $0.44 | [Link](https://www.lcsc.com/product-detail/C96446.html?spm=wm.mxq.bom.2.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| CL05B103KB5NNNC | Samsung Electro-Mechanics | 10nF ±10% 50V Ceramic Capacitor X7R 0402 | - | C15195 | 100 | 100 | 100 | $0.0015 | $0.15 | [Link](https://www.lcsc.com/product-detail/C15195.html?spm=wm.mxq.bom.3.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402CG120J500NT | FH | 12pF ±5% 50V Ceramic Capacitor C0G 0402 | - | C1547 | 100 | 100 | 100 | $0.0009 | $0.09 | [Link](https://www.lcsc.com/product-detail/C1547.html?spm=wm.mxq.bom.4.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| USBLC6-2SC6 | ST | 17VC Clamp 5A Ipp ESD DIODE SOT-23-6L | - | C7519 | 5 | 5 | 5 | $0.1391 | $0.70 | [Link](https://www.lcsc.com/product-detail/C7519.html?spm=wm.mxq.bom.5.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| KT-0805G | Hubei KENTO Elec | Emerald Green 525nm LED Indication - Discrete 2.6V~3.1V 0805 | - | C2297 | 50 | 50 | 50 | $0.0103 | $0.52 | [Link](https://www.lcsc.com/product-detail/C2297.html?spm=wm.mxq.bom.6.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402WGF1002TCE | UNI-ROYAL | 10kΩ ±1% 62.5mW 0402 Thick Film Resistor | - | C25744 | 100 | 100 | 100 | $0.0006 | $0.06 | [Link](https://www.lcsc.com/product-detail/C25744.html?spm=wm.mxq.bom.7.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402WGF220JTCE | UNI-ROYAL | 22Ω ±1% 62.5mW 0402 Thick Film Resistor | - | C25092 | 100 | 100 | 100 | $0.0004 | $0.04 | [Link](https://www.lcsc.com/product-detail/C25092.html?spm=wm.mxq.bom.8.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402WGF1003TCE | UNI-ROYAL | 100kΩ ±1% 62.5mW 0402 Thick Film Resistor | - | C25741 | 100 | 100 | 100 | $0.0004 | $0.04 | [Link](https://www.lcsc.com/product-detail/C25741.html?spm=wm.mxq.bom.9.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402WGF2201TCE | UNI-ROYAL | 2.2kΩ ±1% 62.5mW 0402 Thick Film Resistor | - | C25879 | 100 | 100 | 100 | $0.0004 | $0.04 | [Link](https://www.lcsc.com/product-detail/C25879.html?spm=wm.mxq.bom.10.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| 0402WGF3300TCE | UNI-ROYAL | 330Ω ±1% 62.5mW 0402 Thick Film Resistor | - | C25104 | 100 | 100 | 100 | $0.0005 | $0.05 | [Link](https://www.lcsc.com/product-detail/C25104.html?spm=wm.mxq.bom.11.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| TS-1088-AR02016 | XUNPU | Tactile Switch SPST 160gf 2mm SMD (SMT) Tab 4mm x 3mm Surface Mount | - | C720477 | 10 | 10 | 10 | $0.0512 | $0.51 | [Link](https://www.lcsc.com/product-detail/C720477.html?spm=wm.mxq.bom.12.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| ESP32-S3FH4R2 | ESPRESSIF | -104.5dBm 21dBm 2.4GHz LX7 Chip 3V~3.6V QFN-56(7x7) RF Transceiver ICs RoHS | - | C3013940 | 1 | 1 | 1 | $2.4463 | $2.45 | [Link](https://www.lcsc.com/product-detail/C3013940.html?spm=wm.mxq.bom.13.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| AP2112K-3.3TRG1 | DIODES | 3.3V Positive Fixed SOT-25-5 Voltage Regulators - Linear, Low Drop Out (LDO) Regulators RoHS | - | C51118 | 5 | 5 | 5 | $0.1461 | $0.73 | [Link](https://www.lcsc.com/product-detail/C51118.html?spm=wm.mxq.bom.14.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| ICS-43432 | TDK InvenSense | Omnidirectional -26dB 65dB SMD-7P,3x4mm Microphones RoHS | - | C574021 | 1 | 1 | 1 | $3.4036 | $3.40 | [Link](https://www.lcsc.com/product-detail/C574021.html?spm=wm.mxq.bom.15.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| ATECC608C-SSHDA-T | MICROCHIP | I2C SOIC-8 Specialized ICs | - | C28975195 | 1 | 1 | 1 | $1.2495 | $1.25 | [Link](https://www.lcsc.com/product-detail/C28975195.html?spm=wm.mxq.bom.16.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| XY-USBAM-90 | XYECONN | USB 2.0 Through Hole USB, DVI, HDMI Connector Adapters | Through Hole | C53133495 | 10 | 10 | 10 | $0.0575 | $0.58 | [Link](https://www.lcsc.com/product-detail/C53133495.html?spm=wm.mxq.bom.17.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| S3240000101040 | JGHC | Crystal 40MHz ±10ppm 10pF 40Ω SMD3225-4P | SMD3225-4P | C426988 | 10 | 10 | 10 | $0.0488 | $0.49 | [Link](https://www.lcsc.com/product-detail/C426988.html?spm=wm.mxq.bom.18.xh___wm.bjg.btn.cre&lcsc_vid=EgVYBFIHRABeAlxfFQdeUFBREgQMAwIHTgJdUgECR1gxVlNfQlZcUFZQTlVYVDtW) |
| **Total** | | Total is included in EchoKey PCBA | | | | | | (USD) | **$11.88** | Without Shipping |

## Full BOM

| Part Name | Quantity | Total Price | Where to Buy |
| :--- | :---: | :---: | :--- |
| EchoKey PCB | 5 | $13.00 | [JLCPCB](https://jlcpcb.com/) |
| EchoKey PCBA | 2 | $64.10 | [JLCPCB](https://jlcpcb.com/) |
| EchoKey 3D Printed Parts | 1 | $1.00 | [Filament from local 3D printer](https://github.com/TheAbsoluteMin/echo-key/tree/main/3D_Models/3D_Printing) |
| Total | (USD) | $78.10 | Without Shipping |

<details>
<summary>
  <h3>JLCPCB Pricing Breakdown</h3>
</summary>
<img width="1755" height="600" alt="image" src="https://github.com/user-attachments/assets/8db7bef7-7ea6-4cd0-a198-e2ebd343947c" />  
<img width="1091" height="996" alt="image" src="https://github.com/user-attachments/assets/27c73683-246a-4496-ab48-b6215c032d56" />
<img width="1097" height="1032" alt="image" src="https://github.com/user-attachments/assets/a743ec5c-5e76-46f0-9b8c-a37da5209eca" />
</details>

## Credits
Thank you so much for generously funding and supporting the creation of EchoKey:
- Hack Club
- EasyEDA
