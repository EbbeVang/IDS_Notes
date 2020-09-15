
#include <Arduino.h>
const int potentiometerPin = 15;

void setup() {
  pinMode(potentiometerPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int result = analogRead(potentiometerPin);
  Serial.println(result); 
}