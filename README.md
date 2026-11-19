# DHT11 Sensor with NodeMCU ESP8266 and KiwisIoT Dashboard

An IoT-based environmental monitoring project that uses a DHT11 sensor and NodeMCU ESP8266 to measure temperature and humidity and display the readings on the KiwisIoT cloud dashboard.

## Project Overview

This project connects a DHT11 temperature and humidity sensor to a NodeMCU ESP8266. The ESP8266 collects environmental readings and sends them wirelessly to the KiwisIoT platform using Wi-Fi.

The dashboard allows users to monitor temperature and humidity remotely in real time.

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- Wireless data transmission using ESP8266
- Cloud-based monitoring through KiwisIoT
- Live sensor data visualization

## Hardware Components

| Component | Quantity |
|---|---:|
| NodeMCU ESP8266 | 1 |
| DHT11 Temperature and Humidity Sensor | 1 |
| Jumper Wires | As required |
| USB Cable | 1 |

## Software Requirements

- Arduino IDE
- ESP8266 Board Package
- DHT Sensor Library
- Adafruit Unified Sensor Library
- KiwisIoT Arduino Library

## Circuit Connections

### DHT11 to NodeMCU ESP8266

| DHT11 Pin | NodeMCU Pin |
|---|---|
| VCC | 3.3V |
| DATA | D2 |
| GND | GND |

**Note:** This wiring assumes the DHT11 data pin is connected to D2. If you use a bare DHT11 sensor rather than a module, add the required pull-up resistor between DATA and VCC.

## KiwisIoT Dashboard

The NodeMCU sends the sensor readings to the KiwisIoT cloud platform.

| Channel | Data |
|---|---|
| Channel 0 | Temperature (°C) |
| Channel 1 | Humidity (%) |

Configure the corresponding dashboard widgets to display temperature and humidity readings.

## How It Works

1. The DHT11 sensor measures the surrounding temperature and humidity.
2. The NodeMCU ESP8266 reads the sensor values.
3. The ESP8266 connects to the Wi-Fi network.
4. The KiwisIoT library sends the readings to the cloud dashboard.
5. Users can monitor the latest temperature and humidity values remotely.

## Installation

1. Install the Arduino IDE.
2. Configure the ESP8266 board package.
3. Install the DHT Sensor and Adafruit Unified Sensor libraries.
4. Install the KiwisIoT Arduino library.
5. Connect the DHT11 sensor to the NodeMCU.
6. Add your Wi-Fi credentials and KiwisIoT Topic ID to the Arduino sketch.
7. Select the correct ESP8266 board and port.
8. Upload the code and open your KiwisIoT dashboard.

## Libraries and Resources

- **KiwisIoT Website:** https://www.kiwisiot.in/
- **KiwisIoT Arduino Library:** https://github.com/Kiwistron/KiwisIoT
- **KiwisIoT Example Projects:** https://github.com/Kiwistron/KiwisIoT-Projects/tree/main

## Applications

- Room temperature and humidity monitoring
- Indoor environmental monitoring
- Greenhouse monitoring
- Storage condition monitoring
- IoT learning and experimentation

## Project Tutorial

Read the complete project tutorial on Hackster.io:

[DHT11 Sensor with NodeMCU ESP8266 – KiwisIoT Dashboard](https://www.hackster.io/kirusokumar/dht11-sensor-with-nodemcu-esp8266-kiwisiot-dashboard-a24868)

## Author

**Kirusokumar**

## License

This project is intended for educational and experimental purposes. You may modify and improve it with appropriate credit to the original author.