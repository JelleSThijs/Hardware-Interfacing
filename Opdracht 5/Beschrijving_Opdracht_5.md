# Opdracht 3 - Beschrijving
## De inleiding
Voor deze opdracht moeten 2 ledjes om en om aangezet worden. De ledjes moeten wisselen elke keer als er op de knop wordt gedrukt.

## De benodigde componenten
- Arduino Uno R3
- Servo 1x
- Knop 2x
- Weerstand 10K Ohm 2x

## De opbouw
![Afbeelding Tinkercad opdracht 5](https://github.com/JelleSThijs/Hardware-Interfacing/blob/ebe122169427af926f15467cd4c331a0081c4dc6/Opdracht%205/Tinkercad_Opdracht_5.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit de ene kant van de `knoppen` aan op de `plus` rij van het breadboard.
3. Sluit de andere kant van de `knoppen` aan op de `6` en `7` poorten van de arduino.
4. Sluit ook de andere kant van de `knoppen` aan op de ene kant van de `10K Ohm` weerstanden.
5. Sluit tot slot de andere kant van de `10K Ohm` weerstanden aan op de `min` rij van het breadboard.
6. Sluit de `rode en bruine draad` van de servo aan op de `plus` en `min` rijen van het breadboard.
7. Sluit tot slot de `oranje draad` van de servo aan op de `11` poort van de arduino.

## De methode
[Link naar de video van opdracht 5](https://github.com/JelleSThijs/Hardware-Interfacing/blob/ebe122169427af926f15467cd4c331a0081c4dc6/Opdracht%205/Video_Opdracht_5.mp4)


Er worden eerst een aantal variablen gemaakt buiten de `setup()` en `loop()`, zodat deze variablen kunnen worden aangesproken in beide functies.

- Importeer de `Servo.h` bibliotheek en maak een servo object aan genaamd `servo`
- Maak de variablen `btn_1` en `btn_2` waarin de `pinnen` van de knoppen wordt opgeslagen.
- Maak de array `target_angles` waarin twee hoekwaardes (`angles`) worden opgeslagen.
- Maak de variable `current_angle` waar de waarde van de servo wordt bijgehouden.
- Maak de variable `target_angle` waar de geweenste hoekwaarde (`angle`) wordt bijgehouden.
- Maak de variable `ta_counter` waar wordt bijgehouden hoe vaak de servo de `target_angle` heeft behaald.

Voer de volgende code een keer uit in de `setup()` functie
- Zet de pinmodus van `btn_1` en `btn_2` naar INPUT (invoer) modus.
- Koppel het servo object `servo` aan pin `11`.
- Stuur de `servo` terug naar de startpositie.

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Gebruik `if statements` om te controleren welken `knoppen` er worden ingedrukt.
2. Als `beide knoppen` zijn ingedrukt beweegt de `servo` in 5 seconden naar de ene kant, wacht de `servo` 2 seconden, en beweegt de `servo` in 0.5 seconden terug met de `control_servo` functie.
3. Als `btn_1` is ingedrukt beweegt de `servo` in 5 seconden naar de ene kant en beweegt de `servo` in 5 seconden terug met de `control_servo` functie.
4. Als `btn_2` is ingedrukt beweegt de `servo` in 0.5 seconden naar de ene kant en beweegt de `servo` in 0.5 seconden terug met de `control_servo` functie.

Er is voor deze opdracht een eigen functie geschreven genaamd `control_servo`. Deze functie doet het volgende:
1. Controleer of met een `if statement` of `current_angle` gelijk is aan `target_angle`. 
2. Als dat zo is, word de `ta_counter` opgeteld
3. Er word er een nieuwe `target_angle` gekozen uit de `target_angles`. 
4. Tot slot wordt er gewacht. Hoelang er wordt gewacht ligt aan de meegegeven `delay_ms` waarde.
5. maak gebruik van 2 andere `if statements` om de servo naar links of rechts te bewegen, als de `current_angle` meer of minder is dan de `target_angle`.
6. Doe eerst de `current_angle` met 1 op of aftellen.
7. Beweeg de `servo` 1 stapje in de goede richting.
8. Bereken de vertraging (`delay`) die moet worden toegepast.
9. voor de vertraging (`delay`) uit. 

## Het AI-Gebruik
Het gebruik van AI is gelimiteerd aan foutopsporing en aanbevelingen

Er is gebruik gemaakt van de volgende ai chatbots:
- Google Gemini - https://gemini.google.com/app
- ChatGPT - https://chatgpt.com

Voor elk chat bericht is het volgende toegevoegd zodat er geen nieuwe code wordt geschreven:

`do not write code. only advise`

## De bronnenlijst
Opdracht 5 op Brightspace - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025666 <br>
Workshop 1 - https://brightspace.adainforma.tk/lessons/inf/2024_bp4_hwi_01/ <br>
Workshop 2 - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025645