// 5b
const int redPin = 10;
const int greenPin = 11;
const int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  analogWrite(redPin, 255);
  analogWrite(greenPin, 130);
  analogWrite(bluePin, 0);
  delay(1000);
}

// 5b
const int redPin = 6;
const int greenPin = 5;
const int bluePin = 3;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Gelb
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 0);
  delay(1000);

  // Cyan
  analogWrite(redPin, 0);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
  delay(1000);

  // Magenta
  analogWrite(redPin, 255);
  analogWrite(greenPin, 0);
  analogWrite(bluePin, 255);
  delay(1000);
}

// 5c
// Erzeuge mit Hilfe einer RGB-LED den aus Kunst bekannten Farbekreis. Beginne bei Gelb und erzeuge den Farbverlauf im Uhrzeigersnn. 
const int redPin = 10;
const int greenPin = 11;
const int bluePin = 9;

void setup() {}

void loop() {
  // Yellow to Green
  for (int g = 255; g >= 0; g--) {
    analogWrite(redPin, 255 - g);
    analogWrite(greenPin, g);
    analogWrite(bluePin, 0);
    delay(50);
  }

  // Green to Cyan
  for (int b = 0; b <= 255; b++) {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255 - b);
    analogWrite(bluePin, b);
    delay(50);
  }

  // Cyan to Blue
  for (int g = 255; g >= 0; g--) {
    analogWrite(redPin, 0);
    analogWrite(greenPin, g);
    analogWrite(bluePin, 255);
    delay(50);
  }

  // Blue to Magenta
  for (int r = 0; r <= 255; r++) {
    analogWrite(redPin, r);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, 255 - r);
    delay(50);
  }

  // Magenta to Red
  for (int b = 255; b >= 0; b--) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(bluePin, b);
    delay(50);
  }

  // Red to Yellow
  for (int g = 0; g <= 255; g++) {
    analogWrite(redPin, 255);
    analogWrite(greenPin, g);
    analogWrite(bluePin, 0);
    delay(50);
  }
}

