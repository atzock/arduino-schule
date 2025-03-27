// a
void setup() {
    Serial.begin(9600);
    int zahl = 2;
    while (zahl * zahl < 257) {
        Serial.println(zahl * zahl);
        zahl *= 2;
    }
}

void loop() {}

// b
long ergeb = 1000001; // 1.000.001

void setup() {
    Serial.begin(9600);
    long zahl = 2;
    while (zahl * zahl < ergeb) {
        Serial.println(zahl * zahl);
        zahl *= 2;
    }
}

void loop() {}
