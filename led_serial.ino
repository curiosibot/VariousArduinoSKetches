#include <RedBot.h>
#include <RedBotSoftwareSerial.h>
int ledRed = 11;
int ledBlue = 9;


void setup() 
{

pinMode(11, OUTPUT);
pinMode(9, OUTPUT);
Serial.begin(9600);
Serial.print("Enter in led function and press [Send].");

}

void blinkBlue()
{
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
 }

void blinkRed()
{
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);
}

void loop() 
{
   if(Serial.available() > 0)
   {
    ledRed = Serial.parseInt(); 
    blinkRed();
    ledBlue = Serial.parseInt();
    blinkBlue();
   }

}
