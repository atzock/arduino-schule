int stammb = 2;
float ergebnis = 0.0;
int delay1 = 250;

void setup() {
    Serial.begin(9600);
    Serial.println("Die ersten Stammbrueche lauten etwa:");
}

void loop() {
    for (int i = 0; i < 18; i++) {
        ergebnis = 1.0 / stammb;
        Serial.print("Ein ");
        switch (stammb) {
            case 2:
                Serial.print("Halbes = ");
                break;
            case 3:
                Serial.print("Drittel = ");
                break;
            default:
                Serial.print(stammb);
                Serial.print("tel = ");
                break;
        }
        Serial.println(ergebnis, 3);
        stammb++;
        delay(delay1);
    }
}