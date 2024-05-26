#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  pinMode(7,INPUT);
  pinMode(8,OUTPUT);
  pinMode(10,INPUT);
  myservo.attach(9);

}

void loop() {
  if(digitalRead(7)==HIGH || digitalRead(10)==HIGH)

  {
    digitalWrite(8,HIGH);
    myservo.write(90);
    delay(100);
  }
  else
  {
    digitalWrite(8,LOW);
    myservo.write(0);
    delay(10);

  }
}
