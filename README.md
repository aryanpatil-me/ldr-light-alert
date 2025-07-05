# Light-Based Alert System (LDR + Buzzer + LED)

An Arduino project that triggers an alert when the light level drops below a threshold. It uses a photoresister(LDR) to detect light intensity and responds with and buzzer.

---

## What This Project Does 
- Green LED turns on when therre is sufficient light
- Red LED + buzzer turn on when it gets dark
- Uses analog sensing with an LDR and voltage divider
- Helps simulate real-world applications like night alarms or smart lamps

---

## Components Used
| Component     | Qty | Purpose                     |
|---------------|-----|-----------------------------|
| Arduino UNO   | 1   | Main controller             |
| LDR (photoresistor) | 1 | Light sensor             |
| 10kΩ Resistor | 1   | For voltage divider         |
| Green LED     | 1   | Safe indicator              |
| Red LED       | 1   | Alert indicator             |
| Buzzer        | 1   | Audio alert                 |
| 220Ω Resistors| 2   | For LEDs                    |
| Breadboard + Jumper wires | – | Circuit setup      |

---

## Circuit Connections

- **LDR** and **10kΩ resistor** form a voltage divider:
  - LDR to 5V
  - Middle point to A0
  - 10kΩ from middle point to GND

- **Outputs**:
  - D5 → Buzzer
  - D6 → Red LED
  - D7 → Green LED

---

## Code Used

[See `ldr_alert_system.ino` in this repo.](https://github.com/aryanpatil-me/ldr-light-alert/blob/main/ldr_alert_system.ino)

---

## Circuit Image
![circuit_diagram](https://github.com/user-attachments/assets/d4823b7e-f04f-4222-9cc6-4c81ba04516b)

---

## What I Learned
- How to use a photoresistor (LDR) with Arduino
- Implemented a **volatge divider circuit**
- Used analogRead() for light detection
- Controlled multiple outputs(buzzer, LEDs) based on analog input
- Practiced clean wiring and real-time logic

---
Created by **Aryan Patil**

