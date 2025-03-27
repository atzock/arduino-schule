const int ledPin = 13; // the number of the LED pin
const int interval = 500; // interval at which to blink (milliseconds)

void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // wait for a second
  delay(interval);
  // turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // wait for a second
  delay(interval);
}
