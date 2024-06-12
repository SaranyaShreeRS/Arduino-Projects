// Capacitive Touch Sensor

int Pin_1 = 1;
int Pin_2 = 2;
int Pin_3 = 3;
int Pin_4 = 4;

int Led_1 = 8;
int Led_2 = 9;
int Led_3 = 10;
int Led_4 = 11;

void setup()
{
  pinMode(Pin_1,INPUT);
  pinMode(Pin_2,INPUT);
  pinMode(Pin_3,INPUT);
  pinMode(Pin_4,INPUT); 

  pinMode(Led_1,OUTPUT);
  pinMode(Led_2,OUTPUT);
  pinMode(Led_3,OUTPUT);
  pinMode(Led_4,OUTPUT);

 
}
void loop()
{
  if(digitalRead(Pin_1)==HIGH)
  {
      digitalWrite(Led_1,HIGH);
      digitalWrite(Led_2,LOW);
      digitalWrite(Led_3,LOW); 
      digitalWrite(Led_4,LOW);

    
  }
  else if(digitalRead(Pin_2)==HIGH)
  {
      digitalWrite(Led_1,LOW);
      digitalWrite(Led_2,HIGH);
      digitalWrite(Led_3,LOW); 
      digitalWrite(Led_4,LOW);
    
    
  }
  else if(digitalRead(Pin_3)==HIGH)
   {
      digitalWrite(Led_1,LOW);
      digitalWrite(Led_2,LOW);
      digitalWrite(Led_3,HIGH); 
      digitalWrite(Led_4,LOW);
    
    
  }
  else if(digitalRead(Pin_4)==HIGH)
  {
      digitalWrite(Led_1,LOW);
      digitalWrite(Led_2,LOW);
      digitalWrite(Led_3,LOW); 
      digitalWrite(Led_4,HIGH);
 
  }
  else
  {
      digitalWrite(Led_1,LOW);
      digitalWrite(Led_2,LOW);
      digitalWrite(Led_3,LOW); 
      digitalWrite(Led_4,LOW);
    
  }
}