// a
int led = 11;
int delay1 = 50;
int delay2 = 1000;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    for (int i = 0; i < 255; i++) {
        analogWrite(led, i);
        Serial.println(i);
        delay(delay1);
    }
    delay(delay2);
    for (int i = 255; i > 0; i--) {
        analogWrite(led, i);
        Serial.println(i);
        delay(delay1);
    }
    delay(delay2);
}
