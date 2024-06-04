#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init();
  lcd.backlight();

}
void loop()
{
 for(int i=0;i<17;i++)
 {
  if(i%2==0){
  lcd.setCursor(i,0);
  lcd.print("o");
  delay(100);
  lcd.clear();
  }
  else
  {
  lcd.setCursor(i,1);
  lcd.print("O");
  delay(100);
  lcd.clear();
  }
 }
}
