// Dancing Led.....
void setup()
{
  for(int i=1;i<14;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(int i=1;i<14;i++)
  {
    digitalWrite(i,HIGH);
  }
  delay(1000);
  for(int i =1;i<14;i++)
  {
    ll(i);
    delay(100);
  }
  for(int i=13;i>=1;i--)
  {
    ll(i);
    delay(100);
  }
}
  

void ll(int pin){
  for(int i=1;i<14;i++)
  {
  digitalWrite(i,LOW);
  }
  digitalWrite(pin,HIGH);

  }