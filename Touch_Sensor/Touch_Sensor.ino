int touchButton = 1;
int Led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(touchButton,INPUT);
  pinMode(Led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(touchButton)==HIGH)
  {
    digitalWrite(Led,HIGH);
  }
  else
  {
    digitalWrite(Led,LOW);
  }

}
