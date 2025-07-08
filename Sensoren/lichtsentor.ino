// Umrechnung von Teilspannung zu Lux
// Widerstand 20 kΩ
// -----------------------------------
const int sensorPin = A0;
int sensorValue = 0;
float voltage = 0;
float lux = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  voltage = sensorValue * (5.0 / 1023.0);

  lux = voltage * 500;

  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" -> Voltage: ");
  Serial.print(voltage);
  Serial.print("V -> Lux: ");
  Serial.println(lux);

  delay(1000);
}
