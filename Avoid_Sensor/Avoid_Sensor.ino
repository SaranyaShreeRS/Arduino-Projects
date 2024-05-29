//Initializing The Pins 
int Led_Pin= 1 ;
int Sensor= 2 ;

void setup()
{
  pinMode(Led_Pin,OUTPUT);
  pinMode(Sensor,INPUT);
}
void loop()
{
  if(digitalRead(Sensor)==LOW)
  {
    digitalWrite(Led_Pin,HIGH);
  }
  else
  {
    digitalWrite(Led_Pin,LOW);
  }
}