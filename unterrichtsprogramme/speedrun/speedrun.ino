// Taster und Co a)
int zaehler = 0;
const int taster = 2;
const int led = 13;
bool previousTasterStatus = HIGH;

void setup() {
  pinMode(taster, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Setup complete");
}

void loop() {
  int currentTasterStatus = digitalRead(taster);
  if (currentTasterStatus == 1 && previousTasterStatus == 0) {
    zaehler++;
    Serial.print("Button pressed, count: ");
    Serial.println(zaehler);
  }
  previousTasterStatus = currentTasterStatus;
  delay(50);
}

// Ampel:
const int buttonPin = 2;
const int redPin = 8;
const int greenPin = 10;

// Stats
const int STATE_IDLE = 0;
const int STATE_WAITING = 1;
const int STATE_GREEN = 2;

int currentState = STATE_IDLE;
unsigned long stateStartTime = 0;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Taster an GND
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  digitalWrite(redPin, HIGH);  // Start mit Rot
  digitalWrite(greenPin, LOW);
}

void loop() {
  unsigned long now = millis();

  if (currentState == STATE_IDLE) {
    digitalWrite(showPin, LOW);
    if (digitalRead(buttonPin) == LOW) {
      currentState = STATE_WAITING;
      stateStartTime = now;
    }
  }

  else if (currentState == STATE_WAITING) {
    digitalWrite(showPin, HIGH);
    if (now - stateStartTime >= 20000) {  // 20 Sek. Warten
      digitalWrite(redPin, LOW);
      digitalWrite(greenPin, HIGH);
      currentState = STATE_GREEN;
      stateStartTime = now;
    }
  }

  else if (currentState == STATE_GREEN) {
    digitalWrite(showPin, LOW);
    if (now - stateStartTime >= 30000) {  // 30 Sek. Grün
      digitalWrite(greenPin, LOW);
      digitalWrite(redPin, HIGH);
      currentState = STATE_IDLE;
    }
  }
}

