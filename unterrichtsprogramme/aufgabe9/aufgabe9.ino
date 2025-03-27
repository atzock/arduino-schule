// Ein Würfel soll so lange gewürfelt und die Würfe ausgeben werden, bis die Zahl 6 erreicht wird.
// Wenn die 3 gewürfelt wird, soll der Text erscheinen: Das Doppelte wäre schön!
// Das Programm soll anschließend ausgeben, nach wie vielen Würfen die 6 gefallen ist.

int zaehler = 0;

void setup() {
    Serial.begin(9600);
    randomSeed(analogRead(A1));
}

void loop() {
    int wuerfel = random(1, 7);
    zaehler++;
    Serial.print("Wuerfel: ");
    Serial.println(wuerfel);
    if (wuerfel == 3) {
        Serial.println("Das Doppelte waere schoen!");
    } 
    if (wuerfel == 6) {
        Serial.print("Die 6 ist nach ");
        Serial.print(zaehler);
        Serial.println(" Wuerfen gefallen.");
        while (true) {
            delay(3000);
        }
    }
    delay(1000);
}
