# ESP8266 Dual LED Web Controller

This project allows you to control two LEDs connected to an ESP8266 microcontroller over Wi-Fi using a simple web interface. The interface is hosted directly on the ESP8266 as a web server and can be accessed via any device connected to the same network.

## 🌐 Features

- Control two LEDs (ON/OFF) through a web browser.
- Live status updates for both LEDs.
- Responsive interface with styled HTML and CSS.
- Access Point mode or Station mode (depending on your setup).

## 🛠️ Hardware Required

- ESP8266 (e.g., NodeMCU, Wemos D1 Mini)
- 2x LEDs (preferably blue, as used in code)
- 2x 220Ω Resistors
- Jumper wires
- Breadboard

## ⚙️ Pin Configuration

| ESP8266 Pin | Purpose  | Component |
|-------------|----------|-----------|
| D4 (GPIO2)  | Output   | LED 1     |
| D5 (GPIO14) | Output   | LED 2     |

## 📲 Web Interface Preview

The web page displays two toggle buttons with the current status of each LED (ON or OFF).

Example:
