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