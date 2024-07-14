const int Buzzer = 5;
const int LDR = A0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(Buzzer,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  int LDRS = analogRead(LDR);
  Serial.println(LDRS);

if(LDRS>=80)
{
  digitalWrite(Buzzer,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  delay(500);

  digitalWrite(Buzzer,HIGH);
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  delay(500);

}
else
{
  digitalWrite(Buzzer,LOW);
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);

}

}
