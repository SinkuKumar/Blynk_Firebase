#define LDR 0

void setup() {
  Serial.begin(115200);
  Serial.println("LDR Sensor Data");
}

void loop() {
  Serial.print("Light Intensity: ");
  Serial.println(analogRead(LDR));
  delay(100);
}
