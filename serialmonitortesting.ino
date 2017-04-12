void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {           //Wait for user input
    Serial.println(Serial.readString());
  }
}
