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
bool debug = true;
int delay1 = 10; // 10 millis recommended

const int sensorPins[] = {A2, A1, A0};
const int greenLeds[] = {13, 9, 4};
const int redLeds[] = {12, 8, 3};

bool frei[] = {true, true, true};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(greenLeds[i], OUTPUT);
    pinMode(redLeds[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 3; i++) { 
    int sensorValue = analogRead(sensorPins[i]);
    if (sensorValue > 700) {
      frei[i] = false;
      
      if(debug == true) {
        Serial.print(i);
        Serial.print(" ");
        Serial.println(sensorValue);
      }
    } else {
      frei[i] = true;
      // if(debug == true) {
      //   Serial.print(i);
      //   Serial.println(" FREI");
      // }
    }

    if (frei[i]) {
      digitalWrite(greenLeds[i], HIGH);
      digitalWrite(redLeds[i], LOW);
    } else {
      digitalWrite(greenLeds[i], LOW);
      digitalWrite(redLeds[i], HIGH);
    }
    delay(delay1);
  }
}


// bool debug = true;
// bool rot = false;

// void setup() {
//   pinMode(3, OUTPUT);
//   pinMode(4, OUTPUT);

//   pinMode(8, OUTPUT);
//   pinMode(9, OUTPUT);

//   pinMode(12, OUTPUT);
//   pinMode(13, OUTPUT);
// }

// void loop() {
//   if(debug == true) {
//     if(rot == true) {
//       digitalWrite(4, HIGH);
//       digitalWrite(9, HIGH);
//       digitalWrite(13, HIGH);
//     } else {
//       digitalWrite(3, HIGH);
//       digitalWrite(8, HIGH);
//       digitalWrite(12, HIGH);
//     }
//   }
// }