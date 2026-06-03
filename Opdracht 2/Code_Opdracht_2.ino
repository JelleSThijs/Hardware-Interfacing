// defineert welke pinnen er worden gebruikt.
int pins[] = {2,3,4,5,6,7,8,9}; 

// berekend de groote van de pins array. 
// min 1 omdat arrays starten bij 1.
int pins_size = sizeof(pins) / sizeof(pins[0]) - 1;

// defineert hoeveel pinnen er extra moeten blijven branden 
int extra = 3;

// bereken de loop size door de grote van de array te berekenen
// plus de extra waarde toe te voegen. 
// min 1 aangezien de een array bij nul moet beginnen.
int loop_size = pins_size + extra;

void setup() {
  // zet alle pinnen naar output modus.
  for(int i = 0; i <= pins_size; i++) pinMode(pins[i], OUTPUT);
}

void loop() {
  // ga door alle pinnen heen en zet deze voor 200 ms aan.
  // laad een vooraf gedefineerd aantal pinnen aan staan.
  for(int i = 0; i <= loop_size; i++){
    // gebruik een if statement om binnen de pins array te blijven.
    if(i <= pins_size) digitalWrite(pins[i], HIGH);
    delay(200);
    
    // zet een pin uit die extra aantal terug is in de pins array.
    if(i - extra >= 0) digitalWrite(pins[i - extra], LOW);
  }
  
  // ga in omgedraaide volgorde door alle pinnen heen
  // en zet deze voor 200 ms aan. 
  // laad een vooraf gedefineerd aantal pinnen aan staan.
  for(int i = loop_size; i >= 0; i--){
    // zet een pin aan die extra aantal terug is in de pins array.
    // array begint met een hoger nummer dan het aantal pins, 
    // om te zorgen dat de pinnen later kunnen wordern uitgezet
    if(i - extra >= 0) digitalWrite(pins[i - extra], HIGH);
    delay(200);
    
    if(i <= pins_size) digitalWrite(pins[i], LOW);
  }
}
