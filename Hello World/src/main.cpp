/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

// Set LED_BUILTIN if it is not defined by Arduino framework
// #define LED_BUILTIN 13
#define BUTTON 44

void setup()
{
  Serial.begin(9600);
  
  pinMode(BUTTON, INPUT);
}

int state = 0;

void loop()
{

  int buttonState = digitalRead(BUTTON);

  if (buttonState == HIGH) {
    ++state;
  } 

  Serial.println(state);

  delay(1);
}