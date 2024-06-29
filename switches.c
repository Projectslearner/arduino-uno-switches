/*
    Project name : Arduino Uno Switches
    Modified Date: 29-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-switches
*/

// Define the pin connected to the push button
const int buttonPin = 2;

void setup() {
  // Initialize serial communication for debugging
  Serial.begin(9600);

  // Set the button pin as input
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read the state of the push button
  int buttonState = digitalRead(buttonPin);

  // Print the button state to the Serial Monitor
  if (buttonState == HIGH) {
    Serial.println("Button pressed");
  } else {
    Serial.println("Button not pressed");
  }

  // Add a small delay to avoid flooding the Serial Monitor
  delay(200);
}
