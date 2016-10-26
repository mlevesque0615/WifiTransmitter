#include "arduino.h"
#include "LiquidCrystal.h"

// LCD PINS
#define LCD_D4_PIN A12
#define LCD_D5_PIN A13
#define LCD_D6_PIN A14
#define LCD_D7_PIN A15
#define LCD_ENABLE_PIN A10
#define LCD_RS_PIN A11


int main()
{
	// LCD Init
	LiquidCrystal lcd(LCD_RS_PIN, LCD_ENABLE_PIN, LCD_D4_PIN, LCD_D5_PIN, LCD_D6_PIN, LCD_D7_PIN);
	lcd.begin(16, 2); //Init avec la largeur et longueur du LCD
	lcd.print("hello, world! hello, world!");
	for(;;)
	{

	}
	return 1;
}
