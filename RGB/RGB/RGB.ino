// *Interfacing RGB LED with Arduino 
// * Author: Osama Ahmed 

//Defining  variable and the GPIO pin on Arduino
int redPin= 5;
int greenPin = 6;
int  bluePin = 7;

void setup() {
  //Defining the pins as OUTPUT
  pinMode(redPin,  OUTPUT);              
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}
void  loop() {
  setColor(255, 0, 0); // Red Color
  delay(100);
  setColor(0,  255, 0); // Green Color
  delay(100);
  setColor(0, 0, 255); // Blue Color
  delay(100);
  setColor(255, 255, 255); // White Color
  delay(100);
  setColor(170, 0, 255); // Purple Color
  delay(100);
  setColor(127, 127,  127); // Light Blue
  delay(100);
  setColor(128, 0,  128); // Purple
  delay(100);
  setColor(255, 0,  255); // fuchsia
  delay(100);
  setColor(0, 0,  128); // navy
  delay(100);
  setColor(0,128,128); // teal
  delay(100);
  setColor(0,255,255); // aqua
  delay(100);
  setColor(0,255,0); // lime
  delay(100);
  setColor(128,128,0); // olive
  delay(100);
  setColor(0,0,0); // olive
  delay(100);

}
void setColor(int redValue, int greenValue,  int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin,  greenValue);
  analogWrite(bluePin, blueValue);
}