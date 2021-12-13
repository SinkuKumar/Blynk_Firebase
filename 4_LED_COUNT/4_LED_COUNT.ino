#define anode 12
#define cathode 13

int count = 0;

void setup() {
  pinMode(anode, OUTPUT);
  pinMode(cathode, OUTPUT);
  digitalWrite(cathode, LOW);

}


void loop() {
  if(count <= 5)
  {
  digitalWrite(anode, HIGH);
  delay(1000);
  digitalWrite(anode, LOW);
  delay(1000);
  count++;
  }
}
