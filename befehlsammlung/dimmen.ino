int dimm_led = 13;
int dimm = 128; // 0-255

void setup() {
    pinMode(dimm_led, OUTPUT);
}

void loop() {
    analogWrite(dimm_led, dimm);
}