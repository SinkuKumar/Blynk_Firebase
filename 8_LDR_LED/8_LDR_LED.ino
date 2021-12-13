#define LDR 0
#define LED 2

void setup() {
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  if(analogRead(LDR) > 800){
    digitalWrite(LED, LOW);
    delay(1000);
    }
  digitalWrite(LED, HIGH);
}
