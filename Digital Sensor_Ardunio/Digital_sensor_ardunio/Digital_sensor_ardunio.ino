/*
  Motion sensor detection (digital on/ off)
 
 */

#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int buttonPin = 8;     // the number of the pushbutton pin
//const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


void setup()
{
  
  lcd.begin(16, 2);
  lcd.print("Welcome to Motion");
  lcd.setCursor(0, 1);
  lcd.print("Detection System");
  delay(5000);
  pinMode(buttonPin, INPUT);     
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
   if (buttonState == LOW) 
  {     
    
    lcd.clear();
    lcd.print("Motion Detected ");
    delay(50);
  } 
  else 
  {
    
    lcd.clear();
    lcd.print("Motion Not Detected");
    delay(50);
    lcd.setCursor(0, 0);
    
  }
}
