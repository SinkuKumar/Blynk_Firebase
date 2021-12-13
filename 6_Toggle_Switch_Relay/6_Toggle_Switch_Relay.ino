#define buttonPin 16
#define relay 13

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relay, OUTPUT);
}

void loop() {
  if(digitalRead(buttonPin) == HIGH){
    digitalWrite(relay, LOW);
    delay(1000);
    }
  digitalWrite(relay, HIGH);
}
