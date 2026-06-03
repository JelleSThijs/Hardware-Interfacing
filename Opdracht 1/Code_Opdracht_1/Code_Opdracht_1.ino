void setup() {
  // zet de pin nummer 10 en 13 naar output.
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);

}

void loop() {
  // zet steeds pin 10 en 13 oms te beurt aan en uit, elke 1,5 sec.
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);
  delay(1500);
  
  
  digitalWrite(13, LOW);
  digitalWrite(10, HIGH);
  delay(1500);
}
