// Dancing Led.....
void setup()
{
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
  delay(100);

  ll(1);
  delay(100);

  ll(2);
  delay(100);

  ll(3);
  delay(100);

  ll(4);
  delay(100);

  ll(5);
  delay(100);

  ll(6);
  delay(100);

  ll(7);
  delay(100);

  ll(8);
  delay(100);

  ll(9);
  delay(100);

  ll(10);
  delay(100);

  ll(11);
  delay(100);

  ll(12);
  delay(100);
  
  ll(13);
  delay(100);

  ll(13);
  delay(100);

  ll(12);
  delay(100);

  ll(11);
  delay(100);

  ll(10);
  delay(100);

  ll(9);
  delay(10);

  ll(8);
  delay(100);

  ll(7);
  delay(100);

  ll(6);
  delay(100);

  ll(5);
  delay(100);

  ll(4);
  delay(100);

  ll(3);
  delay(100);

  ll(2);
  delay(100);

  ll(1);
  delay(100);

  ll(1);
  delay(100);
  ll(6);
  delay(100);
  ll(11);
  delay(100);

  ll(2);
  delay(100);
  ll(7);
  delay(100);
  ll(12);
  delay(100);

  ll(3);
  delay(100);
  ll(8);
  delay(100);
  ll(13);
  delay(100);

  ll(4);
  delay(100);
  ll(9);
  delay(100);

  ll(5);
  delay(100);
  ll(10);
  delay(100);
}

void ll(int pin){
  digitalWrite(1,LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  digitalWrite(pin,HIGH);
}