#include <SoftwareSerial.h>

#define led 16
#define buzzer 5
#define led2 2

SoftwareSerial bluetooth(14, 12);

void setup() {
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  bluetooth.begin(9600);
  Serial.println("Bluetooth Serial");
}

void loop() {
  if(Serial.available()){
    bluetooth.write(Serial.read());
    //Serial.read()
    }
  if(bluetooth.available()){
    int option = bluetooth.parseInt();
    Serial.println(option);
    switch(option){
      case 1:
        digitalWrite(led, HIGH);
        break;
      case 2:
        digitalWrite(led, LOW);
        break;
      case 3:
        digitalWrite(buzzer, HIGH);
        break;
      case 4:
        digitalWrite(buzzer, LOW);
        break;
      case 5:
        digitalWrite(led2, HIGH);
        break;
      case 6:
        digitalWrite(led2, LOW);
        break;
      default:
        digitalWrite(led, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(buzzer, LOW);
      }
    }
}
