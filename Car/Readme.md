# IR Remote Controlled Motor Driver using Arduino

This project allows you to control two DC motors using an IR remote and an Arduino. The motors can move forward, backward, turn left, and turn right based on specific IR remote buttons.

## 📹 Demo Video

👉 [Watch the Demo Video](https://github.com/huseyinTozluyurt/ArduinoProjects/blob/f6d991a158bde481931ab713786442e86a91473e/Car/Car%20(2).mp4)

> Replace the link above with your actual GitHub video upload link from an issue or discussion.

## 🛠️ Components Used

- Arduino Uno (or compatible)
- L298N Motor Driver Module
- 2x DC Motors
- IR Receiver (TSOP1838 or similar)
- IR Remote Control
- Jumper Wires
- External Power Supply (if needed)

## 🔌 Pin Configuration

| Arduino Pin | Component            |
|-------------|----------------------|
| D2          | Motor Driver IN1     |
| D3          | Motor Driver IN2     |
| D4          | Motor Driver IN3     |
| D5          | Motor Driver IN4     |
| D9          | Motor Driver EN1     |
| D10         | Motor Driver EN2     |
| D8          | IR Receiver Signal   |

## 🎮 IR Remote Button Mappings

| IR Code      | Button | Action   |
|--------------|--------|----------|
| `0xE718FF00` |   2    | Forward  |
| `0xF708FF00` |   4    | Left     |
| `0xA55AFF00` |   6    | Right    |
| `0xAD52FF00` |   8    | Backward |

## 🚀 Setup Instructions

1. Connect all components as described.
2. Install the `IRremote` library in Arduino IDE.
3. Upload the code.
4. Open the Serial Monitor to view received IR codes.
5. Press the mapped buttons on your IR remote to control motion.

## 📂 Code Snippet

```cpp
if(IR.decodedIRData.decodedRawData == 0xE718FF00) // Forward
