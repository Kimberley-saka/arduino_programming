/*
* get data from sensors and display on the lcd
*/
#include <hd44780.h>
#include <Wire.h>
#include <hd44780ioClass/hd44780_I2Cexp.h>
#define ledRed 5
#define ledYellow 6
#define DOUT 4 // gasSensor 
#define relay 3


int stateRead = 0; // read value of DOUT
int gasRead = 0;
int lightRead = 0;


hd44780_I2Cexp lcd(0x20, I2Cexp_MCP23008, 7, 6, 5, 4, 3, 2, 1, HIGH);

void setup() {

  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(relay, OUTPUT);
  pinMode(DOUT, INPUT);

}

void loop() {


}
