#include <Arduino.h>

const byte GREEN_LED_PIN = 10;
const byte YELLOW_LED_PIN = 11;
const byte RED_LED_PIN = 12;

const byte GREEN_LED_PIN_SWITCH = 2;
const byte YELLOW_LED_PIN_SWITCH = 3;
const byte RED_LED_PIN_SWITCH = 4;

void setup() {
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);

  pinMode(GREEN_LED_PIN_SWITCH, INPUT);
  pinMode(YELLOW_LED_PIN_SWITCH, INPUT);
  pinMode(RED_LED_PIN_SWITCH, INPUT);
};

void loop() {
  digitalWrite(GREEN_LED_PIN, digitalRead(GREEN_LED_PIN_SWITCH));
  digitalWrite(YELLOW_LED_PIN, digitalRead(YELLOW_LED_PIN_SWITCH));
  digitalWrite(RED_LED_PIN, digitalRead(RED_LED_PIN_SWITCH));
};