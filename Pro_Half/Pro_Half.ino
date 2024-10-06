#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>  

 
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 

#define OLED_RESET 4

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT);  
 
#define BLUE 0x001F
 
#define trigPin 7 
#define echoPin 6 
#define RedLed 8
#define Buzzer 9

void setup() {
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(RedLed,OUTPUT);
  pinMode(Buzzer,OUTPUT);
 // display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);  
  delay(2000);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);
 //  display.setTextColor(BLUE);
}

void loop() {
  delay(100);

 long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance<15){
    digitalWrite(RedLed,HIGH);
    digitalWrite(Buzzer,HIGH);
    display.clearDisplay();
    display.setTextSize(3);
    display.setCursor(2,6);
    display.print("-------");
    display.print("DANGER!");
    display.print("-------");
    display.setTextSize(1);

  display.setTextSize(2);
  display.display(); 
    delay(100);
  }
  else{
    digitalWrite(RedLed,LOW);
    digitalWrite(Buzzer,LOW);
  
     display.clearDisplay();

  // display Distance
  display.setTextSize(2);
  display.setCursor(0,7);
  display.print("Distance: ");

  display.setTextSize(3);
  display.setCursor(0,25);
  display.print(distance);
  display.print("cm");

  display.setTextSize(1);

  display.setTextSize(2);
  display.display(); 
  }

}




