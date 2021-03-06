#include <Arduino.h>

const int potentiometerPin = 15;

void setup() {
  pinMode(potentiometerPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int potentiometerValue  = analogRead(potentiometerPin);
  double voltage = potentiometerValue /4095.0 * 3.3;

  Serial.print("voltage is: ");
  Serial.println(voltage);
}