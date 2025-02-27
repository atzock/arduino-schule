//Aufgabe 3:
//Schreibe ein Programm, dass die Quadratzahlen angibt:
// 1x1 = 
// Das Programm soll 3 Sekunden Zeit zum Nachdenken geben und dann das Ergebnis angeben.
// In der nächste Zeile soll dann die nächste Aufgabe erscheinen etc.
// 2x2 = 
// bis
// 20x20 =

void setup() {
    Serial.begin(9600);

    for (int zaehler = 1; zaehler <= 20; zaehler++) {
        Serial.print(String(zaehler) + "x" + String(zaehler) + "=");
        delay(3000);
        Serial.println(zaehler * zaehler);
        delay(1000);
    }
    Serial.println(' ');
    Serial.println('end');
}

void loop () {}


