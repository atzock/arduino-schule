// Im Hauptprogramm wird eine Zufallszahl zwischen 1 und 10 bestimmt. Mit dieser Zufallszahl soll eine Funktion auf gerufen werden, welche die Fakultät der Zahl berechnet und zurückgibt. Anschließend soll im Hauptprogramm z.B. bei 4 ausgegben werden: "Die Fakultät von 4! ist 24".

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
}

void loop() {
  int zufall = random(1, 11);
  long fakultaet = Fakultaet(zufall);
  Serial.print("Die Fakultät von ");
  Serial.print(zufall);
  Serial.print(" ist ");
  Serial.println(fakultaet);
  delay(5000);
}

long Fakultaet(int n) {
  long fakultaet = 1;
  for (int i = 1; i <= n; i++) {
    fakultaet *= i;
  }
  return fakultaet;
}
