# Opdracht 3 - Beschrijving
## De inleiding
Voor deze opdracht moeten 2 ledjes om en om aangezet worden. De ledjes moeten wisselen elke keer als er op de knop wordt gedrukt.


## De benodigde componenten
- Arduino Uno R3
- Led 2x
- Knop 1x
- Weerstand 220 Ohm 2x
- Weerstand 10K Ohm 1x

## De opbouw
![Afbeelding Tinkercad opdracht 3](https://github.com/JelleSThijs/Hardware-Interfacing/blob/a8170c5b9c0461c9fb9a71240a28db7ffb7c1d9d/Opdracht%203/Tinkercad_Opdracht_3.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit poort `8` en `10` van de arduino aan op de ene kant van de 220 Ohm weerstanden.
3. Sluit de andere kant van de 220 Ohm weerstanden aan op de `plus` pinnen van de ledjes.
4. Sluit de `min` pinnen van de ledjes aan op de `min` rij van het breadboard.
5. Sluit de ene kant van de `knop` aan op de `plus` rij van het breadboard.
6. Sluit de andere kant van de `knop` aan op de `12` poort van de arduino.
7. Sluit ook de andere kant van de `knop` aan op de ene kant van de 10K Ohm weerstand.
8. Sluit tot slot de andere kant van de 10K Ohm weerstand aan op de `min` rij van het breadboard.


## De methode
[Link naar de video van opdracht 3](https://github.com/JelleSThijs/Hardware-Interfacing/blob/a8170c5b9c0461c9fb9a71240a28db7ffb7c1d9d/Opdracht%203/Video_Opdracht_3.mp4)


Er worden eerst een aantal variablen gemaakt buiten de `setup()` en `loop()`, zodat deze variablen kunnen worden aangesproken in beide functies.

- Maak Eerst de array `led_pins` met daarin alle `pinnen` van de ledjes die door de arduino worden gebruikt. Deze kan dan later worden aangesproken en makkelijk worden veranderd.
- Maak de variable `led_pins_size` waarin de `grote van de array` wordt opgeslagen.
- Maak de variable `btn_pin` waarin de `pin` van de knop wordt opgeslagen.
- Maak de variable `pressed_counter` waarin wordt begehouden hoe vaak er op de knop is gedrukt.
- Maak de variable `last_input` waarin wordt bijgehouden wat de vorige staat van de knop.

Voer de volgende code een keer uit in de `setup()` functie
- Zet de pinmodus van alle pinnen in de `led_pins` array naar `OUTPUT` (uitvoer) modus door gebruik te maken van een `for loop` met de grote van `led_pins_size`.
- Zet de pinmodus van de `btn_pin` naar `INPUT` (invoer) modus.

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Maak steeds de variable `current_input` waarin de huidige `staat van de knop` wordt opgeslagen.
2. Gebruik een `if statement` die controleerd of de knop is ingedrukt (`HIGH`), en dat de knop niet al ingedrukt was (`LOW`) door naar de vorige invoer (`last_input`) te kijken.
3. tel de variable die bijhoud hoevaak de knop was ingedrukt (`pressed_counter`) op.
4. Zet het ene ledje aan, gebaseerd op hoevaak de knop is ingedrukt (`pressed_counter`).
5. Zet het andere ledje uit.
6. Sla buiten de if statement op wat de laatste staat van de knop (`current_input`) was in de `last_input` variable.


## Het AI-Gebruik
Het gebruik van AI is gelimiteerd aan foutopsporing en aanbevelingen

Er is gebruik gemaakt van de volgende ai chatbots:
- Google Gemini - https://gemini.google.com/app
- ChatGPT - https://chatgpt.com

Voor elk chat bericht is het volgende toegevoegd zodat er geen nieuwe code wordt geschreven:

`do not write code. only advise`


## De bronnenlijst
Opdracht 3 op Brightspace - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025664 <br>
Workshop 1 - https://brightspace.adainforma.tk/lessons/inf/2024_bp4_hwi_01/