# Arduino Simon Says Memory Game

This project is a memory-based game similar to "Simon Says." It uses LEDs to flash a random sequence, and the player must repeat the same sequence using buttons. A buzzer provides audio feedback for each press, and a victory melody plays when the sequence is correctly repeated.

## 🧠 Objective

- Observe the LED sequence.
- Repeat the same sequence using four buttons.
- Win the game if the input matches the randomly generated sequence.

## 🖼️ Circuit Diagram

![Circuit Schema](https://github.com/huseyinTozluyurt/ArduinoProjects/blob/b072c1723abfc8e01c2920f62a27510ef04bd093/memoryGame/circuitSchema.png)

> 📌 Make sure to use pull-down resistors for the buttons and current-limiting resistors for the LEDs.

## 🛠️ Components Used

- Arduino Uno (or compatible)
- 4x LEDs (any color)
- 4x Push Buttons
- 4x 220Ω Resistors (for LEDs)
- 4x 10kΩ Resistors (for pull-down on buttons)
- 1x Buzzer
- Breadboard & Jumper Wires

## 🔌 Pin Configuration

| Component   | Arduino Pin |
|-------------|-------------|
| LED 1       | D4          |
| LED 2       | D5          |
| LED 3       | D6          |
| LED 4       | D7          |
| Button 1    | D8          |
| Button 2    | D9          |
| Button 3    | D10         |
| Button 4    | D11         |
| Buzzer      | D12         |

## 🎮 How It Works

1. **Startup:** A random LED sequence is generated (length between 4–6 steps).
2. **Player Turn:** Player reproduces the sequence by pressing buttons.
3. **Feedback:**
   - Each button press lights up the corresponding LED and plays a unique tone.
   - If the sequence is correct, the game plays a victory light & sound pattern.
   - If wrong, the game resets and the sequence is replayed.

## 🔊 Buzzer Feedback Tones

| Button | Tone (Hz) |
|--------|-----------|
| 1      | 120       |
| 2      | 240       |
| 3      | 410       |
| 4      | 540       |

## 🏆 Victory Pattern

- LEDs blink in unison.
- A repeating buzzer tone plays to celebrate success.

## 🧑‍💻 Code Features

- Uses `random()` and `randomSeed(millis())` for unique sequences.
- Compares dynamic arrays for player input vs generated pattern.
- Uses `tone()` and `noTone()` for sound output.

## 💡 Possible Improvements

- Add difficulty levels (longer sequences).
- Add high-score or increasing rounds.
- Add LCD or OLED display for instructions.

## 🧑‍💻 Author

- Developed by [Huseyin Tozluyurt]
- Arduino & Game Logic Enthusiast

## 📜 License

This project is open-source under the MIT License.
