/*
	Created by: Mars Laurio
    Created on: Sept 2023
    
    Turns an LED on for one second, then off for one second, repeatedly.
*/

int Pin5 = 5;

void setup() {
  pinMode(Pin5, OUTPUT);
}

void loop() {
  digitalWrite(Pin5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Pin5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}