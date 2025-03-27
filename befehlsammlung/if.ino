// Lernbereich für if-Anweisungen

// Einfache if-Anweisung
int temperature = 15;
if (temperature < 20) {
    Serial.println("Es ist kalt.");
}

// if-else-Anweisung
bool sonnig = false;
if (sonnig) {
    Serial.println("Sonnenbrille aufsetzen.");
} else {
    Serial.println("Keine Sonnenbrille erforderlich.");
}

// if-else if-else-Anweisung
int stunden = 10;
if (stunden < 12) {
    Serial.println("Guten Morgen!");
} else if (stunden < 18) {
    Serial.println("Guten Tag!");
} else {
    Serial.println("Guten Abend!");
}

// Verschachtelte if-Anweisung
bool istEsWindig = true;
bool istEsRegnerisch = true;
if (istEsRegnerisch) {
    if (istEsWindig) {
        Serial.println("Regenschirm könnte umkippen.");
    } else {
        Serial.println("Regenschirm ist sicher zu benutzen.");
    }
}


// Verknüpfung zweier Variablen
// und
if (draußen ist es kalt && draußen ist es regnet) {
    Jacke anziehen;
}

// oder
if (draußen ist es kalt || draußen ist es regnet) {
    Jacke anziehen;
}


// Beispiele
bool istEsKalt = true;
bool istEsRegnerisch = false;

if (istEsKalt && istEsRegnerisch) {
    Serial.println("Jacke anziehen");
}

if (istEsKalt || istEsRegnerisch) {
    Serial.println("Jacke anziehen");
}
