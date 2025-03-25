// 7a
const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  analogWrite(redPin, 255);   // Full intensity for red
  analogWrite(greenPin, 165); // Medium intensity for green
  analogWrite(bluePin, 0);    // No blue
  delay(1000);
}
// ---------------------------------------------------------------------------------------------------
// 7b
int redPin = 6;
int greenPin = 5;

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop() {
    // Rot nach Gelb
    for (int i = 0; i < 256; i++) {
        analogWrite(redPin, 255);
        analogWrite(greenPin, i);
        delay(5);
    }
    // Gelb nach Grün
    for (int i = 0; i < 256; i++) {
        analogWrite(redPin, 255 - i);
        analogWrite(greenPin, 255);
        delay(5);
    }
}

// ---------------------------------------------------------------------------------------------------
// 7c
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Gelb
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  delay(1000);

  // Grün
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  delay(1000);

  // Cyan
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(1000);

  // Blau
  analogWrite(redPin, 0);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);

  // Magenta
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);

  // Rot
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 0);
  delay(1000);
}
// ---------------------------------------------------------------------------------------------------
// 7c with transition
void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    for (int i = 0; i <= 255; i++) {
        analogWrite(redPin, 255);
        analogWrite(greenPin, i);
        analogWrite(bluePin, 0);
        delay(10);
    }
    delay(1000);

    for (int i = 255; i >= 0; i--) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, 255);
        analogWrite(bluePin, i);
        delay(10);
    }
    delay(1000);

    for (int i = 0; i <= 255; i++) {
        analogWrite(redPin, 0);
        analogWrite(greenPin, i);
        analogWrite(bluePin, 255);
        delay(10);
    }
    delay(1000);

    for (int i = 255; i >= 0; i--) {
        analogWrite(redPin, i);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 255);
        delay(10);
    }
    delay(1000);

    for (int i = 0; i <= 255; i++) {
        analogWrite(redPin, 255);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, 255 - i);
        delay(10);
    }
    delay(1000);

    for (int i = 255; i >= 0; i--) {
        analogWrite(redPin, 255);
        analogWrite(greenPin, 0);
        analogWrite(bluePin, i);
        delay(10);
    }
    delay(1000);
}
