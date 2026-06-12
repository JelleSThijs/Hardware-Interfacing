# Opdracht 6 - Beschrijving
## De inleiding
Voor deze opdracht moet er een Stopwacht worden gemaakt met 2 knoppen en een I2C scherm.

Als er op de 1e knop wordt gedrukt, dan start de stopwatch met tellen. Als de 1e knop 2 seconden lang wordt ingedrukt, dan wordt de lap geregistreerd en weergegeven.

Als er op de 2e knop wordt gedrukt, dan pauzeert het tellen.

Als beide knoppen tegelijk worden ingedrukt, dan wordt de
stopwatch en de laptime gereset.

## De benodigde componenten
- Arduino Uno R3
- Knop 2x
- I2C LCD beelscherm
- Weerstand 10K Ohm 1x

## De opbouw
![Afbeelding Tinkercad opdracht 6](https://github.com/JelleSThijs/Hardware-Interfacing/blob/df6925f08c1c4cf5a8b856cd2d5c9ec0a7bcadef/Opdracht%206/Tinkercad_Opdracht_6.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit de ene kant van de `knoppen` aan op de `plus` rij van het breadboard.
3. Sluit de andere kant van de `knoppen` aan op de `6` en `7` poorten van de arduino.
4. Sluit ook de andere kant van de `knoppen` aan op de ene kant van de `10K Ohm` weerstanden.
5. Sluit tot slot de andere kant van de `10K Ohm` weerstanden aan op de `min` rij van het breadboard.
6. Sluit de `VCC` en `GND` poorten van het I2C scherm aan op de `plus` en `min` rijen van het breadboard.
7. Sluit tot slot de `SDA` en `SCL` poorten van het I2C scherm aan op de `A5` en `A4` poorten van de arduino.

## De methode
[Link naar de video van opdracht 6](https://github.com/JelleSThijs/Hardware-Interfacing/blob/df6925f08c1c4cf5a8b856cd2d5c9ec0a7bcadef/Opdracht%206/Video_Opdracht_6.mp4)


Er worden eerst een aantal variablen gemaakt buiten de `setup()` en `loop()`, zodat deze variablen kunnen worden aangesproken in beide functies.

- Importeer de `LiquidCrystal_I2C.h` en `Wire.h` bibliotheken en maak een LiquidCrystal_I2C object aan genaamd `lcd`.
- Maak de variablen `btn_1` en `btn_2` waarin de `pinnen` van de knoppen wordt opgeslagen.
- Maak de variable `time` waar de stopwatch tijd wordt bijgehouden.
- Maak de variable `run_timer` waar wordt bijgehouden of de stopwatch door moet gaan met tellen.
- Maak de variable `held_time` waar wordt bijgehouden of hoe lang `btn_1` wordt vastgehouden.

Voer de volgende code een keer uit in de `setup()` functie
- Zet de pinmodus van `btn_1` en `btn_2` naar `INPUT` (invoer) modus.
- Initialiseer het `lcd` scherm. 
- Zet het backlight aan van het `lcd` scherm.  
- Zet wat standaard tekst op het `lcd` scherm (`Tijd:   00:00:00` en `Lap:    00:00:00`).

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Gebruik `if statements` om te controleren welken `knoppen` er worden ingedrukt.
2. Als `beide knoppen` zijn ingedrukt, worden de `variablen` gereset en de standaard tekst weer op het `lcd` scherm gezet.
3. Als `btn_1` is ingedrukt start de `timer` met optellen. Ook wordt bijgehouden hoe lang er op de knop wordt gedrukt.
4. Als er `2 seconden` is ingedrukt wordt de tijd op de tweede regel gezet in het `lcd`.
5. Als `btn_2` is ingedrukt wordt de `timer` gepauzeerd.
6. Zolang `run_timer` waar is (`true`), wordt er elke 100 miliseconden met 0.1 opgeteld. 
7. Ook wordt elke seconden de tijd op het `lcd` scherm gezet.

Er is voor deze opdracht een eigen functie geschreven genaamd `format_timer`. Deze functie doet het volgende:
1. Maak de variable `string` met plek voor `16` characters.
2. Maak variablen voor uren, minuten en seconden.
3. schrijf een zin in het volgende formaat: 
`uur:minuut:seconden` en geef deze zin terug als string.


## Het AI-Gebruik
Het gebruik van AI is gelimiteerd aan foutopsporing en aanbevelingen

Er is gebruik gemaakt van de volgende ai chatbots:
- Google Gemini - https://gemini.google.com/app
- ChatGPT - https://chatgpt.com

Voor elk chat bericht is het volgende toegevoegd zodat er geen nieuwe code wordt geschreven:

`do not write code. only advise`

## De bronnenlijst
Opdracht 6 op Brightspace - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025667 <br>
Workshop 1 - https://brightspace.adainforma.tk/lessons/inf/2024_bp4_hwi_01/ <br>
Workshop 2 - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025645 <br>
I2C Display Tutorial - https://projecthub.arduino.cc/arduino_uno_guy/i2c-liquid-crystal-displays-5eb615 <br>
Time sprintf functie example - https://forum.arduino.cc/t/setting-date-and-time-format-yyyy-mm-dd-hh-mm-ss-using-rtc/303688/2
