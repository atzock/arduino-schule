// Aufgabe 12a
int tstatus;

void setup() {
    pinMode(4, INPUT_PULLUP);
    Serial.begin(9600);
}

void loop() {
    tstatus=digitalRead(4);
    Serial.println(tstatus);
    delay(500);
}

// Aufgabe 12b
int tstatus;

void setup() {
    pinMode(4, INPUT_PULLUP);
    pinMode(2, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    tstatus=digitalRead(4);
    if (tstatus == 0) {
        digitalWrite(2, HIGH);
        Serial.println("Taster ist gedrückt!");
    } else {
        digitalWrite(2, LOW);
        Serial.println("Taster ist nicht gedrückt!");
    }
}

//Aufgabe 12c
int tstatus;

void setup() {
    pinMode(4, INPUT_PULLUP);
    pinMode(2, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    tstatus=digitalRead(4);
    if (tstatus == 0) {
        digitalWrite(2, LOW);
    } else {
        digitalWrite(2, HIGH);
    }
    delay(50);
}
