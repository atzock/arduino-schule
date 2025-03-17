int zaehler = 1;
void setup() {
    Serial.begin(9600);

    while (zaehler <= 20) {
        Serial.print(String(zaehler) + "x" + String(zaehler) + "=");
        delay(3000);
        Serial.println(zaehler * zaehler);
        delay(1000);
        zaehler++;
    }
    Serial.println(' ');
    Serial.println('end');
}

void loop () {}