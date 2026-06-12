# Opdracht 1 - Beschrijving
## De inleiding
Voor deze opdracht moeten 2 ledjes om en om aan te zetten. De ledjes moeten elke 1,5 seconden wisselen.

## De benodigde componenten
- Arduino Uno R3
- Led 2x
- Weerstand 220 Ohm 2x

## De opbouw
![Afbeelding Tinkercad opdracht 1](https://github.com/JelleSThijs/Hardware-Interfacing/blob/cdd426b66424a93c02cbcca8b4f21b35cb446213/Opdracht%201/Tinkercad_Opdracht_1.png?raw=true)

___

1. Sluit de `5 volt` pin en `Grond` pin van de arduino aan op de `plus` en `min` rijen van het breadboard. 
2. Sluit poort `10` en `13` van de arduino aan op de ene kant van de weerstanden.
3. Sluit de andere kant van de weerstanden aan op de `plus` pinnen van de ledjes.
4. Sluit tot slot de `min` pinnen van de ledjes aan op de `min` rij van het breadboard.


## De methode
[Link naar de video van opdracht 1](https://github.com/JelleSThijs/Hardware-Interfacing/blob/cdd426b66424a93c02cbcca8b4f21b35cb446213/Opdracht%201/Video_Opdracht_1.mp4)

Zet eerst in de `setup()` de pinmodus van pin `10` en `13` naar `OUTPUT` (uitvoer) modus. Hierdoor worden de pinnen maar een keer aan het begin ingesteld.

Voer constant de `loop()` functie uit. De volgende code word in die loop uitgevoerd:
1. Zet `led 1` uit.
2. Zet `led 2` aan.
3. Wacht `1.5` seconden.
4. zet `led 2` uit.
5. zet `led 1` aan.
6. Wacht `1.5` seconden.



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