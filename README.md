<h1 align="center">Speedey</h1>
<div align="center">         
<p align="center">
        <img width="1498" height="972" alt="Zine (3)" src="https://github.com/user-attachments/assets/58b22431-ee94-43df-a933-480096e0217b" />

A fast, DIY Bluetooth-controlled RC car powered by an Arduino Uno and an L298N motor driver.
</p>

<h1 align="center">Overview</h1>
        
<p align="center">Speedey is a custom remote-controlled car that connects to your smartphone via Bluetooth. Built around the Arduino Uno, it features four robust BO motors, an HC-05 Bluetooth module for wireless communication, and a reliable L298N motor driver for precise, variable-speed movements. 

<h1 align="center">Why am I even building this?</h1>
<p align="center">
 Just like my previous builds, this project was created to get hands-on experience with hardware integration, motor control, and wireless communication protocols. It's a fun project that bridges the gap between software logic and physical robotics!
 </p>

<h1 align="center">The Features</h1>
</div>

1. **Bluetooth Control**: Seamlessly connect and control the car using standard Bluetooth RC controller apps on your smartphone via the HC-05 module.
2. **Omnidirectional Maneuverability**: Programmed with specific functions for Forward, Backward, Turning Left/Right, and Diagonal movements (Forward-Left, Backward-Right, etc.).
3. **Variable Speed Control**: Includes 10-level PWM speed mapping so you can easily adjust the throttle from a slow crawl to full speed.
4. **4-Wheel Drive**: Powered by 4 DC BO motors connected to an L298N motor driver for maximum torque and grip.

<div align="center">   
 
# Repository Contents

| Path | What it contains |
| --- | --- |
| `BOM` | Bill of materials details and cost breakdowns |
| `FIRMWARE` | Arduino C++ code to process Bluetooth commands and control the L298N driver |
| `IMAGES` | Photos, screenshots, and the wiring diagram for the project |

</div>

# 3D Models
<p align="center">
  <img width="32%" alt="Screenshot 2026-06-20 181551" src="https://github.com/user-attachments/assets/29c49071-274d-45c1-b90a-b77d5eee6ebd" />
  <img width="32%" alt="Screenshot 2026-06-20 181539" src="https://github.com/user-attachments/assets/c60512db-efc8-4799-818c-95cb6ba6a616" />
  <img width="32%" alt="Screenshot 2026-06-20 175848" src="https://github.com/user-attachments/assets/328a36d8-40e2-4919-825c-9a553a653ec3" />
</p>

<p align="center">
  <img width="32%" alt="Screenshot 2026-06-20 172909" src="https://github.com/user-attachments/assets/ea616198-3159-4e15-bc55-6988fb6140c0" />
  <img width="32%" alt="Screenshot 2026-06-20 172859" src="https://github.com/user-attachments/assets/a53019f5-7053-49fc-80f8-45f6b0ba8ed8" />
  <img width="32%" alt="Screenshot 2026-06-20 170250" src="https://github.com/user-attachments/assets/96044524-060e-4e87-b12e-aa8a502e4aad" />
</p>

<p align="center">
  <img width="32%" alt="Screenshot 2026-06-20 154019" src="https://github.com/user-attachments/assets/d621c291-15c7-4311-97af-40e9f0a3de26" />
  <img width="32%" alt="Screenshot 2026-06-20 154004" src="https://github.com/user-attachments/assets/0cdb7553-7ff4-424c-901e-6a577bc36195" />
  <img width="32%" alt="Screenshot 2026-06-20 153926" src="https://github.com/user-attachments/assets/3f4effc8-ed21-40c1-8702-49a0eb8f0c27" />
</p>

<p align="center">
  <img width="32%" alt="Screenshot 2026-06-20 153808" src="https://github.com/user-attachments/assets/68515f8f-13d2-4655-b3c0-4c1e3d0d3f6c" />
  <img width="32%" alt="Screenshot 2026-06-20 153800" src="https://github.com/user-attachments/assets/353e6437-f028-438a-bae3-009571286e2b" />
  <img width="32%" alt="Screenshot 2026-06-20 153036" src="https://github.com/user-attachments/assets/b601a7a2-c5f3-4539-b3f4-6ad32200cfe5" />
</p>

<p align="center">
  <img width="32%" alt="Screenshot 2026-06-20 152645" src="https://github.com/user-attachments/assets/e507bfc9-1230-4200-acc2-7901b1f814d8" />
  <img width="32%" alt="Screenshot 2026-06-20 181616" src="https://github.com/user-attachments/assets/f6023abe-8e1e-496d-80e5-321b56019ab3" />
  <img width="32%" alt="Screenshot 2026-06-20 181608" src="https://github.com/user-attachments/assets/21435422-cb82-4e0b-af4f-d0b59b42b2ff" />
</p>
# The Components Used

1. Arduino Uno R3 (CH340G)
2. HC-05 Bluetooth Module
3. L298N 2A Motor Driver Module
4. 300 RPM BO Motors (x4)
5. 18650 Li-ion 3000mAh Rechargeable Batteries (x2)
6. 18650 Cell Holder
7. Jumper Wires & Custom Chassis

# Zine
<img width="972" height="1498" alt="Zine" src="https://github.com/user-attachments/assets/0532f131-b0e9-4fc8-88d2-d60dafc3a4d9" />


# Bill of Materials

| Component Name | Link | Quantity | Price Per Item (₹) | Total Price (₹) |
| --- | --- | --- | --- | --- |
| BO motors (300 RPM) | [Robu.in](https://robu.in/product/300-rpm-bo-motor-straight/) | 4 | ₹69 | ₹276 |
| L298N module | [Quartz Components](https://quartzcomponents.com/products/l298n-2a-based-motor-driver-module) | 1 | ₹128 | ₹128 |
| Arduino Uno R3 | [Robu.in](https://robu.in/product/arduino-uno-r3-ch340g-atmega328p-devlopment-board/) | 1 | ₹215 | ₹215 |
| HC-05 Bluetooth Module | [Robu.in](https://robu.in/product/hc-05-6pin-bluetooth-module-with-button/) | 1 | ₹219 | ₹219 |
| 18650 Battery (3000mAh) | [Quartz Components](https://quartzcomponents.com/products/18650-li-ion-3000mah-rechargeable-battery-hobby-grade-only) | 2 | ₹65 | ₹130 |
| Cell holder | [Robu.in](https://robu.in/product/1-x-18650-cell-box/) | 1 | ₹28 | ₹28 |
| **Subtotal** | | | | **₹998** |

# Wiring diagram

<img width="1386" height="1045" alt="WIRING DIAGRAM SPEEDY" src="https://github.com/user-attachments/assets/8939c66e-dd89-4273-b78f-3c6dd1fc4bb4" />


# How to Build it?

**To replicate, follow the steps below:**
1) Print or acquire a chassis for the RC car.
2) Mount the 4 BO motors to the chassis and wire the left two motors in parallel to Motor A output on the L298N, and the right two to Motor B.
3) Connect the L298N control pins (IN1 to IN4) to Arduino pins 7, 6, 5, and 4 respectively.
4) Wire up the HC-05 Bluetooth module, connecting its TX and RX to the defined SoftwareSerial pins (14 and 15).
5) Connect your power supply (18650 batteries) to the motor driver.
6) Flash the `firmware.ino` onto your Arduino Uno.
7) Download a standard Bluetooth RC controller app on your phone, pair it with the HC-05 (default password is usually `0000` or `1234`), and start driving!

## Firmware setup
 - Connect your Arduino Uno to your PC via USB.
 - Open the provided `.ino` file in the Arduino IDE.
 - Select **Arduino Uno** under `Tools > Board` and pick the correct COM port.
 - Click **Upload**.
 - *Note: The code expects standard characters (`F`, `B`, `L`, `R`, etc.) to trigger movements, which aligns perfectly with generic Bluetooth RC Car apps available on mobile platforms.*

