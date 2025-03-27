// Dein Programm soll 10x Würfel simulieren und ausgeben. Zum Schluss soll noch der Mittelwert berechnet werden.
// Die 1. Zahl lautet:
// Die 2. Zahl lautet:
// ...
//Ihr Mittelwert beträgt:

// 8c
int summe = 0;

void setup() {
    Serial.begin(9600);
    randomSeed(analogRead(A1));
}

void loop() {
    
    for (int i = 1; i <= 10; i++) {
        int zahl = random(1, 7);
        summe += zahl;
        Serial.print("Die ");
        Serial.print(i);
        Serial.print(". Zahl lautet: ");
        Serial.println(zahl);
    }
    float mittelwert = summe / 10.0;
    Serial.print("Ihr Mittelwert beträgt: ");
    Serial.println(mittelwert);
}

// 8c für Schnelle
int summe = 0;
int minWert = 6;
int maxWert = 0; 

void setup() {
    Serial.begin(9600);
    randomSeed(analogRead(A1));
}

void loop() {
    
    for (int i = 1; i <= 10; i++) {
        int zahl = random(1, 7);
        summe += zahl;
        if (zahl < minWert) {
            minWert = zahl;
        }
        if (zahl > maxWert) {
            maxWert = zahl;
        }
        Serial.print("Die ");
        Serial.print(i);
        Serial.print(". Zahl lautet: ");
        Serial.println(zahl);
    }
    float mittelwert = summe / 10.0;
    Serial.print("Ihr Mittelwert beträgt: ");
    Serial.println(mittelwert);
    Serial.print("Der kleinste Wert beträgt: ");
    Serial.println(minWert);
    Serial.print("Der größte Wert beträgt: ");
    Serial.println(maxWert);
}
