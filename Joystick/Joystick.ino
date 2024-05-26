int x_pin = A0;
int y_pin = A1;
int sw_pin = 2;

int Red_Led = 4;
int Blue_Led = 5;
int Green_Led = 6;
int Yellow_Led = 7;
int White_Led = 8;

void setup()
{
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(2,INPUT);
  digitalWrite(2,HIGH);

  pinMode(Red_Led,OUTPUT);
  pinMode(Blue_Led,OUTPUT);
  pinMode(Green_Led,OUTPUT);
  pinMode(Yellow_Led,OUTPUT);
  pinMode(White_Led,OUTPUT);

}
void loop()
{
  int x_data = analogRead(A0);
  int y_data = analogRead(A1);
  int sw_data = digitalRead(2);

  if(x_data == 1023)
  {
    digitalWrite(Red_Led,HIGH);
  }
  else if(x_data == 0)
  {
    digitalWrite(Blue_Led,HIGH);
  }
  else if(y_data == 1023)
  {
    digitalWrite(Green_Led,HIGH);
  }
  else if(y_data == 0)
  {
    digitalWrite(Yellow_Led,HIGH);
  }
  else if(sw_data == LOW)
  {
    digitalWrite(White_Led,HIGH);
  }
  else
  {
    digitalWrite(Red_Led,LOW);
    digitalWrite(Blue_Led,LOW);
    digitalWrite(Green_Led,LOW);
    digitalWrite(Yellow_Led,LOW);
    digitalWrite(White_Led,LOW);

  }
}