// Aufgabe 4
// Nun soll das große 1x1 aufgesagt werden:

// Programmiere kurz und elegant und so kurz wie möglich.

// 11x1=11; 11x2=22; ...
// 12x1=12; 12x2=24; ...
// ...
// 20x1=20; 20x2=40; ...

void setup() {
    Serial.begin(9600);
    Serial.println("Das grosse 1x1 lautet:");

    for (int i = 11; i <= 20; i++) {
        for (int j = 1; j <= 10; j++) {
            Serial.print(i);
            Serial.print("x");
            Serial.print(j);
            Serial.print("=");
            Serial.print(i * j);
            Serial.print("; ");
        }
        Serial.println();
        delay(2000);
    }
}

void loop() {}

