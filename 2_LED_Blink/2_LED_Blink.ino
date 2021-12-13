#define SOC_LED 2
#define LED 16
void setup() {
  pinMode(SOC_LED, OUTPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(SOC_LED, LOW);
  delay(1000);
  digitalWrite(SOC_LED, HIGH);
  digitalWrite(LED, LOW);
  delay(1000);
  digitalWrite(LED, HIGH);
}
