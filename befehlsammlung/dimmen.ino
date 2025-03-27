int dimm_led = 13;
int dimm = 128; // 0-255, initial brightness

void setup() {
    pinMode(dimm_led, OUTPUT);
    Serial.begin(9600); // Initialize Serial communication for debugging
}

void loop() {
    analogWrite(dimm_led, dimm);
    Serial.print("Current brightness level: ");
    Serial.println(dimm);
    delay(1000); // Wait for a second before updating again
}
