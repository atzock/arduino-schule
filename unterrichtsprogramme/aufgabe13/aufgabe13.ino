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

// Tastendrucklänge
int buttonPin = 2;
void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Taster an GND
  Serial.begin(9600);
}

void loop() {
  static unsigned long start = 0;
  int buttonState = digitalRead(buttonPin);
  if (buttonState == 0 && start == 0) {
    start = millis();
  }
  else if (buttonState == 1 && start != 0) {
    unsigned long duration = millis() - start;
    start = 0;
    Serial.print("This button press lasted ");
    Serial.print(duration / 1000.0);
    Serial.println(" seconds.");
  }
}

// Projekt Reaktionstester
int tpin = 2;
int showPin = 7;
unsigned long zeit = 0;
int zufallsz = 0;

void setup() {
  pinMode(tpin, INPUT_PULLUP);
  pinMode(showPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  zufallsz = random(1000, 5000);
  Serial.println("Bereit machen!");
  delay(3000);
  Serial.println("Los geht's!");
  delay(zufallsz);
  zeit = millis();
  digitalWrite(showPin, HIGH);

  while (digitalRead(tpin) == HIGH) {
    // warten bis Taster gedrückt
  }
  float sek = (millis() - zeit) / 1000.0;
  digitalWrite(showPin, LOW);
  Serial.print("Dauer: ");
  Serial.print(sek);
  Serial.println(" Sekunden");
  delay(10000);
}

// Projekt Reaktionstester
int tpin = 2;
int showPin = 7;
unsigned long zeit = 0;
int zufallsz = 0;
int player = 0;
float reaktion1 = 0;
float reaktion2 = 0;

void setup() {
  pinMode(tpin, INPUT_PULLUP);
  pinMode(showPin, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A1));
}

void loop() {
  if (player == 0) {
    Spieler1();
    player = 1;
  }
  else {
    Spieler2();
    Serial.print("Gewinner: ");
    if (reaktion1 < reaktion2) {
      Serial.println("Spieler 1!");
    }
    else if (reaktion2 < reaktion1) {
      Serial.println("Spieler 2!");
    }
    else {
      Serial.println("Unentschieden!");
    }
    player = 0;
  }
  delay(10000);
}

float Spieler1() {
  Serial.println("Spieler 1, bereit machen!");
  delay(3000);
  Serial.println("Los geht's!");
  delay(zufallsz);
  zeit = millis();
  digitalWrite(showPin, HIGH);
  while (digitalRead(tpin) == HIGH) {
    // warten bis Taster gedrückt
  }
  reaktion1 = (millis() - zeit) / 1000.0;
  digitalWrite(showPin, LOW);
  Serial.print("Dauer Spieler 1: ");
  Serial.print(reaktion1);
  Serial.println(" Sekunden");
  return reaktion1;
}

float Spieler2() {
  Serial.println("Spieler 2, bereit machen!");
  delay(3000);
  Serial.println("Los geht's!");
  delay(zufallsz);
  zeit = millis();
  digitalWrite(showPin, HIGH);
  while (digitalRead(tpin) == HIGH) {
    // warten bis Taster gedrückt
  }
  reaktion2 = (millis() - zeit) / 1000.0;
  digitalWrite(showPin, LOW);
  Serial.print("Dauer Spieler 2: ");
  Serial.print(reaktion2);
  Serial.println(" Sekunden");
  return reaktion2;
}
