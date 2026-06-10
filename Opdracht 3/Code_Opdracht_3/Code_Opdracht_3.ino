// defineert de led pinnen.
const int led_pins[] = {8, 10}; 

// berekend de groote van de pins array.
const int led_pins_size = sizeof(led_pins) / sizeof(led_pins[0]) - 1; 

// defineert de knop pin.
const int btn_pin = 12;

// houd bij hoe vaak de knop is ingedrukt.
int pressed_counter = 0;

// houd de laatste invoer bij. Staat alvast standaard op HIGH
int last_input = HIGH;


void setup()
{
  // zet de modus voor de pinnen.
  for(int i = 0; i <= led_pins_size; i++) pinMode(led_pins[i], OUTPUT);
  pinMode(btn_pin, INPUT);
}

void loop()
{
  // maak een variabel voor het bijhouden van de knop.
  int current_input = digitalRead(btn_pin);
  
  // controleerd dat de knop is ingedrukt en dat de knop 
  // niet al is ingedrukt.
  if(current_input == HIGH && last_input == LOW) {
    pressed_counter ++;
    digitalWrite(led_pins[(pressed_counter + 1) % 2], HIGH);
    digitalWrite(led_pins[pressed_counter % 2], LOW);
  }
  
  // zet de laatste invoer naar de huidige invoer 
  // om ingedrukt houden te ondersteunen. 
  last_input = current_input;
  
  // voeg een delay van 50ms toe om dubbelle invoer te voorkomen.
  delay(50);
}