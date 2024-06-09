/*
    Project name : Switches
    Modified Date: 09-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-switches
*/

const int pinOFswitch = 3;  
const int LED = 8;  

void setup() 
{  
  pinMode(pinOFswitch, INPUT);  
  pinMode(LED, OUTPUT);  
  Serial.begin(9600); // Initialize serial communication
}  

void loop() 
{  
  int ValueOFswitch;  
  ValueOFswitch = digitalRead(pinOFswitch);  

  if (ValueOFswitch == HIGH) {  
    digitalWrite(LED, HIGH);  
    Serial.println("Switch is pressed"); // Output switch state to serial monitor
    delay(500);  
  }  
  else {  
    digitalWrite(LED, LOW);  
    Serial.println("Switch is released"); // Output switch state to serial monitor
    delay(500);  
  }  
}
