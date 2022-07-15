#include <Arduino.h>

#include <Wire.h>
#include <hd44780.h>                        // main hd44780 header
#include <hd44780ioClass/hd44780_I2Cexp.h>  // i2c expander i/o class header

/*-----( Declare Constants )-----*/
// LCD geometry
const int LCD_COLS = 16;
const int LCD_ROWS = 2;

/*-----( Declare objects )-----*/
//hd44780_I2Cexp lcd;  // declare lcd object: auto locate & auto config expander chip
 hd44780_I2Cexp lcd(0x27);

void setup() {
  // put your setup code here, to run once:

    // Print a message to the LCD.
  lcd.clear();
  delay(1500);
  lcd.setCursor(0, 0);
  lcd.print("Capacitor foil");
  delay(1500);
  lcd.setCursor(0, 1);
  lcd.print("sniffer");

}

void loop() {
  // put your main code here, to run repeatedly:
}