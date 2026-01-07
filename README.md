# Smart Irrigation System using Arduino UNO

## Overview
This project implements an automated irrigation system that controls a water pump based on real-time soil moisture levels. The system supports both **automatic** and **manual** modes, with mode switching and pump control handled wirelessly via a Bluetooth interface.

## Hardware Used
- Arduino UNO
- Soil Moisture Sensor
- 5V Relay Module
- Submersible Water Pump
- 16x2 I2C LCD
- HC-05 Bluetooth Module
- External Power Supply
- Breadboard & Jumper Wires

## Software & Tools
- Embedded C / Arduino IDE
- UART (Bluetooth communication)
- I2C (LCD interface)
- ADC (Soil moisture sensing)
- GPIO (Relay control)

## Working Principle
- The soil moisture sensor provides analog values to the Arduino via ADC.
- In **automatic mode**, the pump turns ON when moisture falls below a predefined threshold and turns OFF when sufficient moisture is detected.
- In **manual mode**, the pump can be controlled using commands sent over Bluetooth.
- Real-time pump and moisture status are displayed on the I2C LCD.

## What I Implemented
- Sensor calibration and threshold-based decision logic
- Relay control for pump operation with electrical isolation
- UART-based command handling using HC-05 Bluetooth module
- I2C LCD integration for real-time system feedback
- Debugging noise issues in analog sensor readings

## Power Management
- Arduino powered via USB or 9V battery
- Pump powered using an external supply to avoid MCU overloading
- Common ground maintained across all modules

## Schematic
![Schematic](https://github.com/user-attachments/assets/0e79942d-4f77-4ed0-9ca3-1818b5ae1c05)

## Flowchart
![Flowchart](https://github.com/user-attachments/assets/4fefe9b9-00c9-444c-b771-fc5a17f26171)

## Result
![System Image](https://github.com/user-attachments/assets/46f96f36-baa7-4a91-9242-544e814c03e3)

## Learnings
- Practical interfacing of analog sensors with microcontrollers
- Handling real-world signal noise and false triggering
- Implementing manual and automatic control logic
- Debugging hardware–software integration issues
