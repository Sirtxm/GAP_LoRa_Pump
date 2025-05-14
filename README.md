GAP LoRa Pump

This repository contains firmware and documentation for the STM32 Wio-E5 based Water Pump Control and Monitoring System. The system uses LoRaWAN to send sensor data to The Things Network (TTN) and allows remote on/off control of the pump via a mobile application.

⚙️ Features

Periodic water level monitoring
LoRaWAN uplink of sensor readings to TTN
Downlink commands from TTN to turn the pump ON/OFF
Configurable parameters: reporting interval, LoRaWAN keys, pump timeout
Low-power sleep between transmissions

