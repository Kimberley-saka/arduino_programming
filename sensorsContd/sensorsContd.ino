#include <hd44780.h>
#include <Wire.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>


hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);


void setup() {
  lcd.begin(16,2);

}

void loop() {
  lcd.print("Hi Kimberley");

  delay(2000);

  lcd.clear();

  lcd.setCursor(0, 1); // set the position of item the be printed on a 16 x 2 lcd
  lcd.print("Hello World");

  delay(2000);
  lcd.clear();

  lcd.setCursor(0, 0); // 0th column, 0th row

}
