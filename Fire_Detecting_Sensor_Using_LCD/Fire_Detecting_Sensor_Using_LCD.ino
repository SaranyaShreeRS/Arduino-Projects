//fire alaram .....

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int Flame_Sensor = 1 ;
int Led = 3 ;
int Buzer = 2 ;

LiquidCrystal_I2C lcd(0x27 ,16 ,2 );
void setup()
{
  lcd.init();
  lcd.backlight();

  pinMode(Buzer,OUTPUT);
  pinMode(Flame_Sensor,INPUT);
  pinMode(Led,OUTPUT);
}
void loop()
{
  if(digitalRead(Flame_Sensor)== HIGH)
  {
    digitalWrite(Buzer,HIGH);
    digitalWrite(Led,HIGH);
    delay(100);
    
    lcd.setCursor(2,0);
    lcd.print("FIRE DEDECTED");
    delay(1000);
    lcd.clear();
  }
  else
  {
    digitalWrite(Buzer,LOW);
    digitalWrite(Led,LOW);

    lcd.setCursor(1,0);
    lcd.print("All CLEAR SAFE");
    delay(1000);
    lcd.clear();
  }
}