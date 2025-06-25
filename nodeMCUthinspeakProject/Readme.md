# ESP8266 Potentiometer Data Logger to ThingSpeak

This project uses an ESP8266 microcontroller to read analog data from a potentiometer and send it to [ThingSpeak](https://thingspeak.com/) over Wi-Fi for real-time visualization.

## 🌐 Project Overview

- Reads analog values from a potentiometer via A0 pin.
- Maps values from `0–1023` to a percentage scale (`0–100`).
- Sends data to a **ThingSpeak channel** every few seconds using its **Write API Key**.

## 🛠️ Components Required

- ESP8266 board (e.g., NodeMCU, Wemos D1 Mini)
- 1x Potentiometer
- Jumper Wires
- Breadboard
- Wi-Fi connection
- ThingSpeak account

## 📊 ThingSpeak Setup

1. Create a free account at [ThingSpeak](https://thingspeak.com/).
2. Create a new channel.
3. Enable **Field 1** for analog data.
4. Copy your:
   - **Channel Number**
   - **Write API Key**
5. Paste those into the code:
   ```cpp
   unsigned long myChannelNum = YOUR_CHANNEL_NUMBER;
   const char* myWriteAPIKey = "YOUR_API_KEY";
