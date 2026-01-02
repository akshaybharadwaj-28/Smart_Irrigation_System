# Smart_Irrigation_System
## Project Overview
This project introduces an intelligent, automated solution for precision water management. Leveraging the Arduino UNO ecosystem, the system integrates soil moisture sensors and relay-driven water pumps to maintain optimal hydration levels for plants. By incorporating a Bluetooth module, the system allows for seamless wireless monitoring and control. This project aims to solve the challenges of modern agriculture and home gardening by prioritizing water conservation and operational efficiency.
## Background
Agriculture remains a vital sector for many economies, and efficient water management plays a crucial role in maximizing crop yield. Traditional irrigation methods often lead to water wastage due to over-irrigation or poor timing. With increasing water scarcity and the need for sustainable farming practices, integrating technology into irrigation systems has become essential. Smart irrigation systems use sensors and microcontrollers to automate water delivery based on real-time soil moisture data, ensuring optimal usage and conserving precious water resources.
With the advancement of embedded systems and sensor technologies, automation in irrigation has become a viable solution. A smart irrigation system leverages sensors to monitor soil moisture in real time and automatically controls water flow using microcontrollers like Arduino. This not only reduces human intervention but also ensures optimal water usage, making agriculture more sustainable and cost-effective.
## Problem Statement
In many agricultural and gardening practices, irrigation is still performed manually or using basic time-based systems, which often leads to overwatering or underwatering. These traditional methods not only waste a significant amount of water but also demand constant human supervision and effort. In regions where water scarcity is a major concern, inefficient irrigation practices further strain the availability of freshwater resources. Moreover, farmers or individuals managing gardens may not always be available to monitor soil conditions and operate pumps at appropriate times.
This project aims to develop a Smart Irrigation System that uses a soil moisture sensor to detect water levels in the soil and control a water pump via an Arduino microcontroller. The system will support both manual and automatic modes, with the option to switch modes and send commands through a Bluetooth module, ensuring flexibility, convenience, and resource conservation.
## Components Used
* Arduino UNO
* Soil Moisture Sensor
* 5V Relay Module
* Submersible Water Pump
* I2C LCD Display (16x2)
* HC-05 Bluetooth Module
* 9V Battery with Connector
* Jumper wires and Breadboard
## Hardware Implementation
The hardware implementation focuses on establishing a seamless and efficient interconnection between all modules. Each component is wired to ensure reliability, safety, and easy operation under real-world conditions.
###  Connecting the Soil Moisture Sensor to the Arduino
The soil moisture sensor includes three pins: VCC, GND, and A0 (analog output). 
* VCC is connected to the 5V pin of the Arduino UNO.
* GND is connected to the Arduino’s ground (GND).
* A0 is connected to analog pin A0 on the Arduino. 
This allows the Arduino to read real-time moisture levels from the soil.
### Integration of the Relay Module and Water Pump
A 5V single-channel relay module is used to control the water pump. 
* VCC and GND of the relay are connected to the Arduino’s 5V and GND pins respectively.
* The IN (signal) pin is connected to digital pin 7 on the Arduino.
* The relay’s NO (Normally Open) and COM (Common) ports are wired to the water pump’s positive terminal and the external power supply, respectively.
* The negative terminal of the pump is connected directly to the power supply’s ground. 
This setup enables the Arduino to turn the pump ON or OFF depending on soil moisture conditions.
### Power Supply Setup
* The Arduino UNO is powered using either a USB cable (for programming and debugging) or a 9V battery for standalone operation.
* The water pump, which requires more current than the Arduino can provide, is powered by a dedicated 9V–12V external power supply to prevent overloading the microcontroller.
* All GND connections are tied together to ensure a common reference and avoid erratic behavior.
### Connecting the I2C LCD Display
A 16x2 I2C LCD display is used to present real-time information. 
* The SDA pin is connected to A4 on the Arduino UNO.
* The SCL pin is connected to A5.
* VCC and GND are connected to the Arduino’s 5V and GND.
This reduces wiring complexity by using just two signal lines for display control.
### Integration of HC-05 Bluetooth Module
The HC-05 Bluetooth module allows wireless serial communication for switching between Manual and Automatic modes. 
* VCC is connected to 5V on the Arduino.
* GND goes to Arduino GND.
* TXD of HC-05 is connected to digital pin 10 (SoftwareSerial RX).
* RXD is connected to digital pin 11 (SoftwareSerial TX) via a voltage divider to step down 5V to 3.3V. 
This setup enables serial communication between a smartphone or PC and the Arduino using Bluetooth.
## Schematic
![schematic](https://github.com/user-attachments/assets/0e79942d-4f77-4ed0-9ca3-1818b5ae1c05)
## Software Implementation
* ### Initialization of Sensors, Relay, LCD, and Bluetooth
* ### Reading Data from the Soil Moisture Sensor
* ### Mode Switching via Bluetooth (Manual / Automatic)
* ### Threshold-Based Decision-Making
* ### Feedback Mechanism and Delays
## Flowchart
![flowchart](https://github.com/user-attachments/assets/4fefe9b9-00c9-444c-b771-fc5a17f26171)
## Results
![real image](https://github.com/user-attachments/assets/46f96f36-baa7-4a91-9242-544e814c03e3)
## References
* [1] Dong, Y., Werling, B., Cao, Z., & Li, G. (2024). Implementation of an in-field IoT system for precision irrigation management.
* [2] Singh, A., Kumar, N., & Kaur, M. (2023). Automated Irrigation System with Soil Moisture Sensing and Mobile Notification.
* [3] Patil, R., Desai, S., & Joshi, K. (2022). IoT-Based Smart Irrigation System Using Soil Moisture Sensor.
* [4] Chauhan, D., Sharma, R., & Gupta, P. (2022). Energy-Efficient Smart Irrigation System with Wireless Sensor Networks.
* [5] Jain, P., Agarwal, S., & Verma, R. (2021). Soil Moisture Sensing and Smart Irrigation Using Arduino.
* [6] Mehta, S., Shah, H., Jain, A., & Trivedi, M. (2018). Automated Agricultural Monitoring and Controlling System Using HC-05 BT Module.
* [7] Akter, S., Ahmed, M., Islam, M., & Rahman, M. (2019). Developing a Smart Irrigation System Using Arduino.
* [8] Arduino Official Website:  https://www.arduino.cc
* [9] SparkFun Electronics:  https://www.sparkfun.com
* [10] All About Circuits:  https://www.allaboutcircuits.com
* [11] ResearchGate:  https://www.researchgate.net
* [12] Hackster.io:  https://www.hackster.io
