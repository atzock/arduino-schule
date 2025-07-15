const int sensorPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin); 

  int brightness = map(sensorValue, 362, 667, 0, 255); 

  analogWrite(ledPin, brightness);

  delay(50);
}

// Parkhaus
// -----------------------------------
const int sensorPins[] = {A0, A1, A2};
const int greenLeds[] = {12, 8, 3};
const int redLeds[] = {13, 9, 4};

bool frei[] = {true, true, true};

void setup() {
  for (int i = 0; i < 3; i++) {
    pinMode(greenLeds[i], OUTPUT);
    pinMode(redLeds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) {
    int sensorValue = analogRead(sensorPins[i]);
    if (sensorValue > 667) {
      frei[i] = false;
    } else {
      frei[i] = true;
    }

    if (frei[i]) {
      digitalWrite(greenLeds[i], HIGH);
      digitalWrite(redLeds[i], LOW);
    } else {
      digitalWrite(greenLeds[i], LOW);
      digitalWrite(redLeds[i], HIGH);
    }
  }
}