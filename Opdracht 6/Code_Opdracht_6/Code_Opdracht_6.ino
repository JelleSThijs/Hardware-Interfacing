// bronnen: 
// https://projecthub.arduino.cc/arduino_uno_guy/i2c-liquid-crystal-displays-5eb615
// https://forum.arduino.cc/t/setting-date-and-time-format-yyyy-mm-dd-hh-mm-ss-using-rtc/303688/2

// library voor het scherm aan te spreken.
#include <LiquidCrystal_I2C.h>

// wordt gebruikt door LiquidCrystal.
#include <Wire.h>

// initialiseer de Liquid Crystal-bibliotheek.
// de eerste parameter is het I2C-adres.
// de tweede parameter geeft aan hoeveel kolommen je scherm heeft.
// de derde parameter geeft aan hoeveel rijen je scherm heeft.
LiquidCrystal_I2C lcd(0x27, 16, 2);

// stel de pinnen voor de knoppen in.
const int btn_1 = 6;
const int btn_2 = 7;

float time = 0.0;
bool run_timer = false;
int held_time = 0;

void setup()
{
  // zet de modus van de knop pinnen naar input.
  pinMode(btn_1, INPUT);
  pinMode(btn_2, INPUT);
 
  // initialiseer het lcd scherm.
  lcd.init();
  // zet het backlight van de lcd aan.
  lcd.backlight();
  
  // schrijf de standaard tekst op het scherm.
  lcd.setCursor(0,0);
  lcd.print("Tijd: 00:00:00.0");
  
  lcd.setCursor(0,1);
  lcd.print("Lap:  00:00:00.0");
  
}

void loop(){
  // reset de stopwatch als alle bij de knoppen zijn ingedrukt. 
  if(digitalRead(btn_1) == HIGH && digitalRead(btn_2) == HIGH){
    // zet de variabel op false zodat de stopwatch niet door telt.
    run_timer = false;
    
    // reset de time variable naar 0.0.
    time = 0.0;
    
    // schrijf de standaard tekst terug op het scherm.
    lcd.setCursor(0,0);
    lcd.print("Tijd: 00:00:00.0");
  
    lcd.setCursor(0,1);
    lcd.print("Lap:  00:00:00.0");
  }
  
  if(digitalRead(btn_1) == HIGH){
    // start de stopwatch als knop 1 wordt ingedrukt.
  	run_timer = true;
    
    // houd bij hou lang er op de knop wordt gedrukt,
    // door de held_time variable op te tellen
    held_time ++;
    
    // als er voor precies 2 seconden (20 * 100ms) op de knop 
    // is gedrukt. dan wordt de lap op het scherm geschreven.
    if(held_time == 20){
      lcd.setCursor(6,1);
      lcd.print(format_timer());
    }
  // reset de held_time variable wanneer de knop wordt losgelaten.
  } else held_time = 0;
  
  // als knop 2 wordt ingedrukt, pauzeerd de timer.
  if(digitalRead(btn_2) == HIGH){
    run_timer = false;
  }
  
  
  // deze if statment houd de tijd bij 
  // zolang als run_timer true is.
  if(run_timer == true) {
    // voeg 0.1 seconden bij de timer toe
    time += 0.1;
    
    // zet de nieuwe tijd op het scherm.
    lcd.setCursor(6,0);
    lcd.print(format_timer());
  }
  
  // wacht voor 100ms (0.1 seconden).
  delay(100);
}

String format_timer() {
  // maak een variable aan waar de tijd in komt te staan
  char string[16];
  
  // bereken het uur, minuut, seconden en 
  // honderste van een seconden.
  int h = (int)time / 3600;
  int m = (int)time % 3600 / 60;
  int s = (int)time % 3600 % 60;
  int dec = (int)(time * 10) % 10;
  
  // maak een reeks van characters de variable op deze manier:
  // uur:minuut:seconden.decimaal
  sprintf(string,"%02d:%02d:%02d.%d", h, m, s, dec);
  
  // zet de reeks van characters om in een string.
  return String(string);
}
