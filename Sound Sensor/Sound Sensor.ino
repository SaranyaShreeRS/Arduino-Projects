int micPin = 2;
int ledPin = 3;
int micValue;
int ledState;

void setup() 
{
  pinMode(micPin, INPUT); 
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  
  micValue = digitalRead(micPin);
  digitalWrite(ledPin,LOW);
  
  if (micValue == HIGH)
  {
    ledState = digitalRead(ledPin); 
    digitalWrite(ledPin, HIGH);
    delay(200); 
    digitalWrite(ledPin, LOW);
  }
}