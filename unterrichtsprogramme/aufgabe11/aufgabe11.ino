const int delay1 = 1000;
String nwtGruppe[] = {"Anna", "Emma", "Devin", "Tom", "Christophh", "David", "Niclas", "Jakob", "Hannes", "Quentin", "Phillip", "Emil", "Roman"};

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));
  Serial.println("--------------------");
}

void loop() {
  int tafel1 = random(0, sizeof(nwtGruppe) / sizeof(nwtGruppe[0]));
  int tafel2 = random(0, sizeof(nwtGruppe) / sizeof(nwtGruppe[0]));
  while (tafel1 == tafel2) {
    tafel2 = random(0, sizeof(nwtGruppe) / sizeof(nwtGruppe[0]));
  }
  Serial.println("Heute haben " + String(nwtGruppe[tafel1]) + " und " + String(nwtGruppe[tafel2]) + " Tafeldienst.");
  delay(delay1);
}