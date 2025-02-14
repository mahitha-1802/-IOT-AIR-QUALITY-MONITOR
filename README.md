# -IOT-AIR-QUALITY-MONITOR

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: MAHITHA GUDALA

*INTERN ID*: CT6WRPH

*DOMAIN*: INTERNET OF THINGS

*DURATION*: 6 WEEKS

*MENTOR*: NEELA SANTOSH

*DESCRPTION*: Components Needed:
Microcontroller: ESP32 or Arduino.

Sensors:

PM2.5 Sensor: e.g., PMS5003.

CO2 Sensor: e.g., MH-Z19B.

Wi-Fi Module: Often built into modern microcontrollers like ESP32.

Power Supply: Ensure it's compatible with your chosen microcontroller and sensors.

Cloud Dashboard Service: e.g., ThingSpeak, Blynk, or AWS IoT.

Connecting Wires: For interfacing the sensors and microcontroller.

Breadboard or PCB: For mounting and connecting components.
System Architecture:
Data Collection: Sensors collect air quality data (PM2.5, CO2 levels).

Data Processing: Microcontroller processes the data from sensors.

Data Transmission: Microcontroller sends the processed data to a cloud dashboard over Wi-Fi.

Data Display: Cloud dashboard displays live air quality metrics and historical trends.
Steps to Build the Prototype:
Setting Up the Microcontroller:
Install the necessary development environment tools (Arduino IDE for ESP32, or other compatible software).

Connect the PM2.5 and CO2 sensors to the respective pins of the microcontroller (refer to the datasheets for pin configurations).
Setting Up the Cloud Dashboard:
Choose a Cloud Service:

ThingSpeak: Allows real-time data collection and visualization.

Blynk: Provides a mobile app for real-time monitoring.

AWS IoT: Robust cloud platform for IoT applications.

Configure the Dashboard:

Set up channels/fields for PM2.5 and CO2 data.

Create visualizations for live and historical data.
Testing and Debugging:
Test Each Component Individually: Ensure sensors are accurately reading data.

Integrate and Test: Combine all components and ensure data is sent to the cloud dashboard.

Check Cloud Dashboard: Verify that the data is displayed correctly in real-time.

Finalizing the Prototype:
Securely Mount the Components: Use an enclosure to protect the device.
Optimize Code for Performance: Ensure reliable data transmission and minimal latency.

Documentation: Document the setup, code, and instructions for using the system.

*OUTPUT*: ![Image](https://github.com/user-attachments/assets/caa72378-9925-4aff-9cfb-cbfb8ea626e9)
