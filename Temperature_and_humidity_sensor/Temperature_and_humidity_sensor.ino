#include <DHT.h>;
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27,20,4); 
  
//Constants
#define DHTPIN 7    
#define DHTTYPE DHT11  
DHT dht(DHTPIN, DHTTYPE); 

int h;  
int t; 



void setup()
{
    Serial.begin(9600);
    Serial.println("Temperature and Humidity Sensor Test");
    dht.begin();
    lcd.init();
    lcd.backlight(); 
}



void loop()
{

    h = dht.readHumidity();
    t = dht.readTemperature();
    
  
    Serial.print("Humidity: ");
    Serial.print(h);
    Serial.print(" % ");
    Serial.print("\t");
    Serial.print("Temperature: ");
    Serial.print(t);
    Serial.println("°");
        



    lcd.setCursor(0, 0);
    lcd.println("   Temperature   ");
    
    lcd.setCursor(0, 1);
    lcd.print("T:");
    lcd.print(t);
    lcd.print("C");

    lcd.setCursor(6, 1);
    lcd.setCursor(11, 1);
    lcd.print("H:");
    lcd.print(h);
    lcd.print("%");
    
  delay(1000); 
}



