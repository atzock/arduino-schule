int messwert;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
    messwert = analogRead(A0);
    spannung = messwert / 204.6; // Umrechnung des Messwerts in Spannung
    Serial.print("Messwert: ");
    Serial.println(messwert);
    delay(1000); 
}
// Der Messwert bei GND sind 0
// Der Messwert bei 5V sind 1023
// Der Messwert bei 3,3V sind 670


// ------------------------------------------------
// Potentialmessung mit Umrechnung in Spannung
int messwert;
float spannung;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
    messwert = analogRead(A0);
    // Beide Spannungen sind gleichwertig
    spannung = messwert / 204.6;
    spannung = 5.0/1023*messwert;
    Serial.print("Potential: ");
    Serial.println(spannung);
    delay(1000); 
}