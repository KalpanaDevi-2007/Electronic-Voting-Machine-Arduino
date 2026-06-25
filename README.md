# Electronic-Voting-Machine-Arduino
# 🗳️ Electronic Voting Machine using Arduino Uno

## 📌 Project Overview

The Electronic Voting Machine (EVM) is an Arduino-based voting system designed and simulated using Tinkercad. The project allows users to cast votes for different candidates using push buttons. The Arduino records each vote, displays information on a 16×2 LCD, provides audio feedback through a buzzer, and indicates the election result using LEDs.

This project demonstrates the basic working principle of an electronic voting machine and helps in understanding Arduino programming, digital input handling, LCD interfacing, and embedded system design.

---

# 🎯 Objectives

- Design an Electronic Voting Machine using Arduino Uno.
- Record votes accurately using push buttons.
- Display voting information on an LCD.
- Prevent voting errors through program logic.
- Display the final election result.
- Simulate the complete system in Tinkercad.

---

# ✨ Features

- Six push buttons for voting and control operations.
- LCD displays instructions and voting results.
- Green LED indicates successful operation.
- Red LED indicates result or status.
- Piezo buzzer provides sound feedback after each vote.
- User-friendly interface.
- Real-time vote counting.
- Arduino-based embedded system.

---

# 🛠 Components Used

| Component | Quantity |
|-----------|---------:|
| Arduino Uno R3 | 1 |
| Breadboard | 1 |
| 16×2 LCD Display | 1 |
| Push Buttons | 6 |
| Green LED | 1 |
| Red LED | 1 |
| Piezo Buzzer | 1 |
| 10 kΩ Potentiometer | 1 |
| 220 Ω Resistors | 2 |
| Jumper Wires | As required |
| USB Cable (Power) | 1 |

---

# 🔌 Hardware Description

### Arduino Uno
Acts as the main controller. It reads button inputs, processes votes, updates the LCD, controls LEDs, and activates the buzzer.

### LCD Display
Displays:
- Welcome message
- Candidate selection
- Vote confirmation
- Final result

### Push Buttons
Used for:
- Voting for candidates
- Result display
- System control

### LEDs
Green LED:
- Indicates successful voting.

Red LED:
- Indicates result/status.

### Piezo Buzzer
Produces a beep sound whenever a vote is registered.

### Potentiometer
Adjusts the LCD contrast for better visibility.

---

# ⚙ Working Principle

1. The Arduino initializes all input and output devices.
2. The LCD displays a welcome message.
3. The voter presses the button corresponding to a candidate.
4. Arduino detects the button press.
5. The vote count for that candidate increases by one.
6. The buzzer produces a confirmation beep.
7. The LCD displays a vote confirmation message.
8. After voting is completed, the result button displays the total votes and the winning candidate.
9. LEDs indicate the system status.

---

# 🔄 Project Workflow

Start System

↓

Initialize LCD

↓

Wait for Button Press

↓

Register Vote

↓

Increase Vote Count

↓

Beep Buzzer

↓

Display Confirmation

↓

Wait for Next Vote

↓

Display Final Result

↓

End

---

# 💻 Software Used

- Tinkercad
- Arduino IDE
- GitHub

---

# 🚀 Future Improvements

- Fingerprint authentication
- RFID voter identification
- GSM-based result transmission
- IoT monitoring
- Cloud database integration
- Touchscreen interface
- Secure voter authentication

---

# 📖 Learning Outcomes

Through this project, I learned:

- Arduino programming
- Digital input/output interfacing
- LCD interfacing
- Push button handling
- Embedded system design
- Circuit simulation using Tinkercad
- GitHub project documentation

---

# 👩‍💻 Author

**Kalpana Devi A**

Electronics and Communication Engineering (ECE)

---

# 📄 License

This project is created for educational and internship purposes.
