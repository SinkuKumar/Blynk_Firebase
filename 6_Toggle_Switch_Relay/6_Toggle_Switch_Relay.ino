#define buttonPin 16
#define relay 13

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(relay, OUTPUT);
}

void loop() {
  if(buttonPin == HIGH){
    digitalWrite(relay, HIGH);
    delay(1000);
    }
  digitalWrite(relay, LOW);
}
