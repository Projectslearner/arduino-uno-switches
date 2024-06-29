# Arduino Uno Switches

#### Project Overview

This project demonstrates how to read the state of a push button using an Arduino Uno and display the status via the Serial Monitor. It provides a basic introduction to working with digital inputs.

#### Components Needed

- **Arduino Uno**
- **Push Button**
- **Jumper Wires**
- **10k Ohm Resistor** (optional, for external pull-down configuration)

#### Block diagram


#### Circuit Setup

1. **Connect Push Button to Arduino Uno:**
   - Connect one terminal of the push button to digital pin 2 on the Arduino Uno.
   - Connect the other terminal of the push button to GND.
   - If using an external pull-down resistor, connect a 10k Ohm resistor between digital pin 2 and GND.

#### Instructions

1. **Circuit Setup:**
   - Wire up the push button to the Arduino Uno as per the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.

3. **Testing:**
   - Upload the code to the Arduino Uno.
   - Open the serial monitor with a baud rate of 9600.
   - Press the push button and observe the state change in the Serial Monitor.

#### Applications

- **User Inputs:** Use push buttons as simple user inputs for various projects.
- **Control Systems:** Implement basic control mechanisms where user interaction is required.
- **Educational Projects:** Learn about digital input handling and serial communication with microcontrollers.

#### Notes

- Ensure proper debounce handling in more complex projects where button presses may be noisy.
- Use internal pull-up resistors by configuring `pinMode(buttonPin, INPUT_PULLUP);` if an external resistor is not used.
- Explore integrating multiple buttons for more advanced input handling.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-uno-switches)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted with ❤️ by ProjectsLearner