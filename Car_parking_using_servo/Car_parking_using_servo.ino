#include <Servo.h>
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);

}

void loop() {
  myservo.write(0);
  delay(1000);
  myservo.write(180);
  delay(1000);
  myservo.write(0);
  delay(1000);
}
