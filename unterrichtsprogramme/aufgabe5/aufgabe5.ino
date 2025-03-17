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

// b
int led = 11;
int delay1 = 50;
int delay2 = 1000;
int i = 0;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    while (i < 255) {
        analogWrite(led, i);
        Serial.println(i);
        delay(delay1);
        i++;
    }
    delay(delay2);
    while (i > 0) {
        analogWrite(led, i);
        Serial.println(i);
        delay(delay1);
        i--;
    }
    delay(delay2);
}

// c

int led = 11;
int delay1 = 20 * 1000 / 255;
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
