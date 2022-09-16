#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  Serial.println("\n\nHello, World!");
  Serial.println("Michael Mena 000817498");
  Serial.println("ESP8266 Chip ID: "+ (String)ESP.getChipId());
  Serial.println("Flash Chip ID: "  + (String)ESP.getFlashChipId());
}

void loop() {
  delay(2000);
  // put your main code here, to run repeatedly:
  Serial.println("Milliseconds since d1 was started: "+ String(millis()) );
}