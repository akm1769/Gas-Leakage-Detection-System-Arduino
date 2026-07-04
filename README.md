 Gas Leakage Detection System Using Arduino


##  Project Overview

The **Gas Leakage Detection System Using Arduino** is an embedded systems project developed to detect combustible gases such as LPG, methane, smoke, and alcohol vapours using an **MQ-2 Gas Sensor**.

When the gas concentration exceeds a predefined threshold, the Arduino UNO immediately activates a **buzzer** and **LED** to warn nearby users. The project demonstrates the practical application of embedded systems for improving safety in homes, laboratories, industries, and commercial environments.

---

# Objectives

- Detect harmful combustible gases
- Provide immediate visual and audible alerts
- Prevent gas-related accidents
- Demonstrate embedded system implementation
- Develop a low-cost safety solution

---

#  Features

- Real-time gas detection
- MQ-2 Gas Sensor
- LED warning indication
- Piezo buzzer alarm
- Arduino UNO based
- Easy to build
- Portable design
- Continuous monitoring

---

#  Hardware Components

| Component | Quantity |
|------------|---------:|
| Arduino UNO | 1 |
| MQ-2 Gas Sensor | 1 |
| LED | 1 |
| Piezo Buzzer | 1 |
| 220Ω Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |
| USB Cable | 1 |

---

#  Software Used

- Arduino IDE
- Embedded C/C++

---

# Circuit Connections

| Component | Arduino UNO |
|------------|-------------|
| MQ-2 VCC | 5V |
| MQ-2 GND | GND |
| MQ-2 D0 | D2 |
| LED (+) | D8 (through 220Ω resistor) |
| LED (-) | GND |
| Buzzer (+) | D9 |
| Buzzer (-) | GND |

---

# Working Principle

1. Arduino powers the MQ-2 sensor.
2. The sensor continuously monitors gas concentration.
3. Under normal conditions:
   - LED OFF
   - Buzzer OFF
   - Serial Monitor displays **SAFE**
4. When gas leakage is detected:
   - MQ-2 output becomes HIGH
   - Arduino activates the LED
   - Arduino activates the buzzer
   - Serial Monitor displays **GAS DETECTED!**
5. Once gas concentration decreases, the system returns to normal monitoring mode.
