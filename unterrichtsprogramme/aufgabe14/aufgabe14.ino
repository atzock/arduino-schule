// Aufgabe 15a
void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  SOS();
  delay(2000);
}

void SOS() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}

// Aufgabe 15b
void setup() {
  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) {
    SOS();
  }
}

void SOS() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}

// Aufgabe 15c
int zufallsz = 0;
int ledpin = 13;

void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);
    randomSeed(analogRead(A1));
}

void loop() {
    zufallsz = random(1, 10);
    Serial.print("Nun wird das SOS-Signal "); Serial.print(zufallsz); Serial.println(" oft erscheinen.");
    for (int i = 0; i < zufallsz; i++) {
        SOS();
        delay(1000);
    }
}

void SOS() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  delay(1000);
  for (int i = 0; i < 3; i++) {
    digitalWrite(13, HIGH);
    delay(200);
    digitalWrite(13, LOW);
    delay(200);
  }
}

// Für Schnellere
void RGB(int rot, int blau, int gruen, int blinkzeit, int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        analogWrite(9, rot);
        analogWrite(10, blau);
        analogWrite(11, gruen);
        delay(blinkzeit);
        analogWrite(9, 0);
        analogWrite(10, 0);
        analogWrite(11, 0);
        delay(blinkzeit);
    }
}
