#include <Arduino.h>

const int LEDPIN = 15;
const int BUTTON_PIN = 22;
int buttonState = 0;

void setup() { 
  pinMode(LEDPIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);

  // Init serial
  Serial.begin(9600);
}

void loop() { 
  buttonState = digitalRead(BUTTON_PIN);
  Serial.println(buttonState);

  if(buttonState == 1){
    // LED OFF
  }else{
    // LED ON
  }
}