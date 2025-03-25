int zufallszahl

void setup() {
    Serial.begin(9600);
}

void loop() {
    zufallszahl = random(0, 100);
    delay(2000);
    Serial.println(zufallszahl);
}
