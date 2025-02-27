int time = 500;
int led = 13;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, HIGH);
    delay(time)
    digitalWrite(led, LOW);
    delay(time);
}