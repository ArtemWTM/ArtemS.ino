#include <LiquidCrystal.h>
constexpr uint8_t LCD_DB4_PIN = 4;
constexpr uint8_t LCD_DB5_PIN = 5;
constexpr uint8_t LCD_DB6_PIN = 6;
constexpr uint8_t LCD_DB7_PIN = 7;
constexpr uint8_t LCD_RS_PIN = 8;
constexpr uint8_t LCD_EN_PIN = 9;
LiquidCrystal lcd(LCD_RS_PIN, LCD_EN_PIN, LCD_DB4_PIN, LCD_DB5_PIN, LCD_DB6_PIN, LCD_DB7_PIN);
void setup() 
{  
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("MicroTechnics");
  lcd.setCursor(0, 1);
  lcd.print("Hi there, LCD!");
}
void loop() 
{
  
}
