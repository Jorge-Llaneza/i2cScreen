#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World!");
  pinMode(13, OUTPUT);
  delay(1000);
}

void loop() {
  Serial.println("Hello");
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}