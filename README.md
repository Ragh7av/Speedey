<h1 align="center">Speedey</h1>
<div align="center">         
<p align="center">
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

# The Components Used

1. Arduino Uno R3 (CH340G)
2. HC-05 Bluetooth Module
3. L298N 2A Motor Driver Module
4. 300 RPM BO Motors (x4)
5. 18650 Li-ion 3000mAh Rechargeable Batteries (x2)
6. 18650 Cell Holder
7. Jumper Wires & Custom Chassis

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

# Wiring / Schematic

The brains of Speedey operate on a simple circuit:
* **Motor Driver (L298N)**: Connected to the Arduino digital pins **7, 6, 5, and 4** for directional and PWM speed control.
* **Bluetooth (HC-05)**: Configured via SoftwareSerial on Arduino pins **14 and 15** (which correspond to Analog pins A0 and A1 on the Uno) to receive commands from the app.
* **Power**: The 2x 18650 batteries supply the L298N directly, which can also power the Arduino via its 5V regulator.

*(A detailed visual guide is available in the `IMAGES` folder as `WIRING DIAGRAM SPEEDY.jpg`).*

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

