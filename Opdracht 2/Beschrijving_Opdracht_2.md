# Opdracht 1 - Beschrijving
## De inleiding
Voor deze opdracht moeten 8 ledjes in een golvende beweging heen en weer aan en uit zetten. Dit betekend dat het licht, van rechts naar links, naar rechts beweegt.

## De benodigde componenten
- Arduino Uno R3
- Led 8x
- Weerstand 220 Ohm 8x

## De opbouw
![Afbeelding Tinkercad opdracht 2](https://github.com/JelleSThijs/Hardware-Interfacing/blob/823b240187531296d92bedd249800994eae9f1b0/Opdracht%202/Tinkercad_Opdracht_2.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit poort `2 t/m 9` van de arduino aan op de ene kant van de weerstanden.
3. Sluit de andere kant van de weerstanden aan op de `plus` pinnen van de ledjes.
4. Sluit tot slot de `min` pinnen van de ledjes aan op de `min` rij van het breadboard.


## De methode
[Link naar de video van opdracht 2](https://github.com/JelleSThijs/Hardware-Interfacing/blob/3c37992ca763fb22230af152ed48797efc112912/Opdracht%202/Video_Opdracht_2.mp4)


Er worden eerst een aantal variablen gemaakt buiten de `setup()` en `loop()`, zodat deze variablen kunnen worden aangesproken in beide functies.

- Maak Eerst de array `pins` met daarin alle `pinnen` van de arduino die worden gebruikt. Deze kan dan later worden aangesproken en makkelijk worden veranderd.
- Maak de variable `pins_size` waarin de `grote van de array` wordt opgeslagen.
- Maak de variable `extra` waarin wordt aangegeven hoeveel extra lampjes er moeten branden. 
- Maak tot slot de variable `loop_size` die de grote voor de meeste `for loops` opslaat.

Zet in de `setup()` de pinmodus van alle pinnen in de `pins` array naar `OUTPUT` (uitvoer) modus door gebruik te maken van een `for loop` met de grote van `pins_size`. Hierdoor worden de pinnen maar een keer aan het begin ingesteld.

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Voer een `for loop` uit met de `loop_size` als grote. 
2. Maak gebruik van een `if statement` om alleen de code uit te voeren als er ook een geldige led in de array is.
3. Zet met deze for loop steeds `1 led` uit de array aan, met de positie `i`.
4. Zet met deze for loop steeds `1 led` uit de array uit, die drie posities terug is in de array. 
5. Voer nog een `for loop`, maar in omgekeerde righting.




## Het AI-Gebruik
Het gebruik van AI is gelimiteerd aan foutopsporing en aanbevelingen

Er is gebruik gemaakt van de volgende ai chatbots:
- Google Gemini - https://gemini.google.com/app
- ChatGPT - https://chatgpt.com

Voor elk chat bericht is het volgende toegevoegd zodat er geen nieuwe code wordt geschreven:

`do not write code. only advise`


## De bronnenlijst
Opdracht 1 en 2 op Brightspace - https://brightspace.avans.nl/d2l/le/lessons/261180/topics/2025663 <br>
Workshop 1 - https://brightspace.adainforma.tk/lessons/inf/2024_bp4_hwi_01/