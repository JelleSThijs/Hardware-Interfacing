#include <Servo.h>

// maak een servo object aan genaamd servo.
Servo servo;

// stel de pinnen voor de knoppen in.
const int btn_1 = 6;
const int btn_2 = 7;

// stel de hoeken in. 
const int target_angles[] = {0, 120};

// stel de variablen in die niet vast staan.
int current_angle = 0;
int target_angle = 120;
int ta_counter = 1;

void setup()
{
  // zet de modus van de knop pinnen naar input.
  pinMode(btn_1, INPUT);
  pinMode(btn_2, INPUT);
  
  // spreek de pin van de servo aan.
  servo.attach(11);
  
  // zet de servo naar de eerste positie.
  servo.write(current_angle);
}

void loop()
{ 
  // als beide knop zijn ingedrukt, wordt de control servo functie
  // uitgevoerd, met een delay van 5 seconden en 0,5 seconden.
  if(digitalRead(btn_1) == HIGH && digitalRead(btn_2) == HIGH){
  	control_servo(5000, 500);
  }
  
  // als de eerste knop zijn ingedrukt, wordt de 
  // control servo functie uitgevoerd, 
  // met een delay van 5 seconden en 5 seconden.
  else if(digitalRead(btn_1) == HIGH) {
    control_servo(5000, 5000);
  }
  
  // als de tweede knop zijn ingedrukt, wordt de 
  // control servo functie uitgevoerd, 
  // met een delay van 0,5 seconden en 0,5 seconden.
  else if(digitalRead(btn_2) == HIGH) {
    control_servo(500, 500);
  }
}

void control_servo(float ms1, float ms2){
  // wissel de target angle een van de waarde van de target angles.
  // 0 en 120.
  if(target_angle == current_angle) {
    // tel de teller 1 omhoog zodat target angle kan veranderen.
    ta_counter ++;
    
    // zet target angle als een van de 2 taget angles.
    target_angle = target_angles[ta_counter % 2];
  }
  
  // draai naar rechts zolang de current angle minder is 
  // dan de target angle.
  else if(target_angle > current_angle){
    // draai de servo naar rechts.
    current_angle++;
    
    // stuur de servo aan met de current angle.
    servo.write(current_angle);
    
    // bereken een delay gebaseerd op de eerste milliseconde waarde
    // gedeeld door de tweede van de target angles.
    int delay1 = ms1 / target_angles[1];
    
    // bereken hoeveel microseconden er 
    // nog overblijven na het eerste delay.
    int micro_delay1 = (ms1 * 1000 / target_angles[1]) - delay1 * 1000;
    
    // voer de hele miliseconden delay uit.
    delay(delay1);
    
    // voer het overgebleven microseconde delay uit.
    delayMicroseconds(micro_delay1);
  }
    
  // draai naar links zolang de current angle meer is 
  // dan de target angle.
  else{
    // draai de servo naar links.
    current_angle--;
    
    // stuur de servo aan met de current angle.
    servo.write(current_angle);
    
    // bereken een delay gebaseerd op de tweede milliseconde waarde
    // gedeeld door de tweede van de target angles.
    int delay2 = ms2 / target_angles[1];
    
    // bereken hoeveel microseconden er 
    // nog overblijven na het eerste delay.
    int micro_delay2 = (ms2 * 1000 / target_angles[1]) - delay2 * 1000;
    
    // voer de hele miliseconden delay uit.
    delay(delay2);
    
    // voer het overgebleven microseconde delay uit.
    delayMicroseconds(micro_delay2);
  }
}