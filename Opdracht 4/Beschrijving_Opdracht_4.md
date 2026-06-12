# Opdracht 4 - Beschrijving
## De inleiding
Voor deze opdracht moeten 6 ledjes aan en uit gaan, gebaseerd op hoever een potentiometer is gedraaid.

## De benodigde componenten
- Arduino Uno R3
- Led 6x
- Potentiometer 1x
- Weerstand 220 Ohm 6x

## De opbouw
![Afbeelding Tinkercad opdracht 4](https://github.com/JelleSThijs/Hardware-Interfacing/blob/c5c7f03d830c1e3c415b247512834e09459b657c/Opdracht%204/Tinkercad_Opdracht_4.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit poort `2 t/m 7` van de arduino aan op de ene kant van de weerstanden.
3. Sluit de andere kant van de weerstanden aan op de `plus` pinnen van de ledjes.
4. Sluit de `min` pinnen van de ledjes aan op de `min` rij van het breadboard.
5. Sluit de `zij pinnen` van de potentiometer aan op de `plus` en `min` rijen van het breadboard.
6. Sluit de `middelste pin` van de potentiometer aan op `A0` poort van de arduino. 

## De methode
[Link naar de video van opdracht 4](https://github.com/JelleSThijs/Hardware-Interfacing/blob/c5c7f03d830c1e3c415b247512834e09459b657c/Opdracht%204/Video_Opdracht_4.mp4)


Er worden eerst een aantal variablen gemaakt buiten de `setup()` en `loop()`, zodat deze variablen kunnen worden aangesproken in beide functies.

- Maak Eerst de array `led_pins` met daarin alle `pinnen` van de ledjes die door de arduino worden gebruikt. Deze kan dan later worden aangesproken en makkelijk worden veranderd.
- Maak de variable `pot_pin` waarin de `pin` van de potentiometer wordt opgeslagen.
- Maak de variable `led_pins_size` waarin de `grote van de array` wordt opgeslagen.
- Maak de variable `pot_value` voor het bijhouden van de waarde van de potentiometer.
- Maak de variable `leds_on` voor het bijhouden van hoeveel ledjes er aan moeten.

Zet in de `setup()` de pinmodus van alle pinnen in de `led_pins` array naar `OUTPUT` (uitvoer) modus door gebruik te maken van een `for loop` met de grote van `led_pins_size`. Hierdoor worden de pinnen maar een keer aan het begin ingesteld.

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Sla de waarde van de `potentiometer` op in de `pot_value` variable.
2. Bereken hoeveel ledjes er aan moeten door `pot_value` keer de grote van de `led_pins_size` te vermenigvuldiggen en te delen door 1024. Deze waarde wordt opgeslagen in de `leds_on` variable. 
3. Gebruik een `for loop` om links naar rechts ledjes aan te zetten.
4. Gebruik dan nog een `for loop` om van rechts naar links uit te zetten.

## Het AI-Gebruik
Het gebruik van AI is gelimiteerd aan foutopsporing en aanbevelingen

Er is gebruik gemaakt van de volgende ai chatbots:
- Google Gemini - https://gemini.google.com/app
- ChatGPT - https://chatgpt.com

Voor elk chat bericht is het volgende toegevoegd zodat er geen nieuwe code wordt geschreven:

`do not write code. only advise`

## De bronnenlijst
Opdracht 4 op Brightspace - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025665 <br>
Workshop 1 - https://brightspace.adainforma.tk/lessons/inf/2024_bp4_hwi_01/ <br>
Workshop 2 - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025645