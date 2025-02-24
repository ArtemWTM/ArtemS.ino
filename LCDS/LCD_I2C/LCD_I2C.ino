#include <Wire.h> #include <LiquidCrystal_I2C.h>
void setup() { 
  LiquidCrystal_I2C lcd(0x27, 20, 4);
  lcd.init(); 
  lcd.backlight(); 
  lcd.clear(); 
  lcd.setCursor(5, 0); 
  lcd.print("Hello,"); 
  lcd.setCursor(5, 1);
  lcd.print("World!");
}
void loop(){
  
}
