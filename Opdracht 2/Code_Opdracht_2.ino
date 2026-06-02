// defineert welke pinnen er worden gebruikt.
int pins[] = {2,3,4,5,6,7,8,9}; 

// berekend de groote van de pins array.
int pins_size = sizeof(pins) / sizeof(pins[0]); 

void setup() {
  // zet alle pinnen naar output modus.
  for(int i = 0; i <= pins_size - 1; i++) pinMode(pins[i], OUTPUT);
}

void loop() {
  // ga door alle pinnen heen en zet deze voor 200 ms aan.
  // sla de laatste pin over aangezien 
  // die al aangaat in de loop hieronder.
  for (int i = 0; i <= pins_size - 2; i++){
    digitalWrite(pins[i], HIGH);
    delay(200);
    digitalWrite(pins[i], LOW);
  }
  
  // ga in omgedraaide volgorde door alle pinnen heen
  // en zet deze voor 200 ms aan. 
  // sla de eerste pin over aangezien 
  // die al aangaat in de loop hierboven.
  for (int i = pins_size - 1; i >= 1; i--){
    digitalWrite(pins[i], HIGH);
    delay(200);
    digitalWrite(pins[i], LOW);
  }

}
