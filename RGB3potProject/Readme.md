# RGB LED Color Controller using Potentiometers (Arduino)

This Arduino project uses three potentiometers to control the Red, Green, and Blue values of an RGB LED. The user can smoothly change LED colors in real time by adjusting the potentiometers, each corresponding to a specific color channel.

## 🎯 Project Goal

To control the intensity of each RGB channel using analog inputs (potentiometers) and output the resulting color to an RGB LED.

## 🛠️ Components Used

- Arduino Uno (or compatible)
- 3x Potentiometers
- 1x Common Cathode RGB LED
- 3x 220Ω Resistors (for limiting LED current)
- Jumper Wires
- Breadboard

## 🔌 Pin Configuration

| Component         | Arduino Pin |
|------------------|-------------|
| Potentiometer 1  | A0          |
| Potentiometer 2  | A1          |
| Potentiometer 3  | A2          |
| Red LED Pin      | D5 (PWM)    |
| Green LED Pin    | D6 (PWM)    |
| Blue LED Pin     | D7 (PWM)    |

## 🚀 How It Works

- Each potentiometer is read using `analogRead()`, giving a value from `0` to `1023`.
- These values are mapped to a range of `0–255` using `map()`, suitable for `analogWrite()` PWM control.
- The mapped values are applied to the RGB LED using the `setColor()` function.
- The `Serial Monitor` displays the current RGB values in real time.

## 💡 Color Mapping

- **Pot 1 → Red**
- **Pot 2 → Green**
- **Pot 3 → Blue**

## 🧪 Sample Output (Serial Monitor)

