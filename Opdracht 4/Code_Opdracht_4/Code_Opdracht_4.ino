// variablen voor de pinnen
const int led_pins[] = {2,3,4,5,6,7};
const int pot_pin = A0;

// groote van de array berekenen.
const int led_pins_size = sizeof(led_pins) / sizeof(led_pins[0]);

// waarde van de potentiometer.
int pot_value = 0;

// variabel om de waarde van de pot meter om te zetten.
int leds_on = 0;

void setup()
{
  // modus zetten voor de pinnen van de lampjes.
  for(int i = 0; i <= led_pins_size - 1; i++) pinMode(led_pins[i], OUTPUT);  
}

void loop()
{
  // lees de waarde van de potmeter.
  pot_value = analogRead(pot_pin);
  
  // zet de waarde van de pot meter om naar de 
  // toepasselijke waarde voor de array.
  // plus 1 omdat de pot waarde 0 kan zijn.
  leds_on = round((pot_value + 1) * led_pins_size / 1024);
  
  // zet lampjes uit gebasserd op een waarde.
  for(int i = 0; i <= leds_on; i++){
    digitalWrite(led_pins[i - 1],LOW);
  }
      
  // zet lampjes aan gebasserd op een waarde.
  for(int i = led_pins_size; i > leds_on; i--) {
    digitalWrite(led_pins[i - 1],HIGH);
  }
  
  // zodat de lampjes soepel uit en aan gaan.
  delay(200);
}