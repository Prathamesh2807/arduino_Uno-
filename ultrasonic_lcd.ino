#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:

  pinMode(9,OUTPUT);
  pinMode(10,INPUT);

  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration;
  int distance ;

  digitalWrite(9,LOW);
  delayMicroseconds(2);

  digitalWrite(9,HIGH);
  delayMicroseconds(10);

  digitalWrite(9,LOW);

  duration = pulseIn(10,HIGH);
  distance = duration * 0.034/2 ;

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("distance:");
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print(" cm");
  delay(500);




}
