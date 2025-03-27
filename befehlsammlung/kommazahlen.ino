float zahl = 0.0;

void setup() {
    Serial.begin(9600);

    // Ganzzahlen werden abgeschnitten
    zahl = 1 / 5; // ERGIBT 0
    Serial.println(zahl);

    // Gleitkommazahlen werden korrekt geteilt
    zahl = 1.0 / 5; // ERGIBT 0.2
    Serial.println(zahl);
}
