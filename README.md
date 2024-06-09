# Rotary Encoder with Stepper Motor Control

#### Project Overview

This project demonstrates the use of a rotary encoder with an Arduino to control the speed and direction of a stepper motor. The rotary encoder allows for precise user input, which is translated into stepper motor movements. The stepper motor's speed and direction are adjusted based on the rotation of the encoder.

#### Components Needed

1. **Arduino Board**
2. **Rotary Encoder**
3. **Stepper Motor**
4. **Stepper Motor Driver (e.g., A4988)**
5. **Power Supply for Stepper Motor**

### Block Diagram



#### Pin Connections

- **Rotary Encoder:**
  - **CLK (Clock)**: Connect to digital pin 2
  - **DT (Data)**: Connect to digital pin 3
  - **SW (Switch)**: Connect to digital pin (optional)

- **Stepper Motor Driver:**
  - **Step Pin**: Connect to digital pin 2
  - **Direction Pin**: Connect to digital pin 3
  - **Enable Pin**: Connect to digital pin 4

#### Instructions

1. **Set Up the Circuit:**
   - Connect the rotary encoder and stepper motor driver to the Arduino as per the defined pin connections.
   - Ensure the stepper motor driver is powered correctly and connected to the stepper motor.

2. **Initialize the System:**
   - Set the enable pin of the stepper motor driver as an output and enable the motor driver.
   - Initialize the AccelStepper library to control the stepper motor.

3. **Control Stepper Motor Speed:**
   - Set the maximum speed and target speed of the stepper motor using the `setMaxSpeed()` and `setSpeed()` functions.
   - Adjust the target speed based on the rotation of the rotary encoder.

4. **Monitor Encoder Input:**
   - Continuously read the rotary encoder's rotation to determine user input.
   - Translate the encoder input into adjustments to the stepper motor's speed and direction.

5. **Drive the Stepper Motor:**
   - Use the `runSpeed()` function of the AccelStepper library to move the stepper motor at the specified speed and direction.

#### Applications

- **Motorized Control Systems:** Implement motorized control systems for various applications, such as robotics, CNC machines, or camera sliders.
- **User Interface Devices:** Create user interface devices with rotary encoders for precise user input, controlling stepper motors for feedback or actuation.
- **Automation Projects:** Incorporate rotary encoders and stepper motors into automation projects for precise control and movement.

#### Notes

- Ensure that the stepper motor driver is compatible with the stepper motor and Arduino board used in the project.
- Adjust the maximum speed, target speed, and acceleration parameters of the stepper motor to suit the specific application requirements.

---

🌐 [projectslearner.com](https://projectslearner.com)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Made for you with ❣️ from ProjectsLearner