/**
* working with variables
*/

int button = 7; //digital pins
int led1 = 10;


void setup() {
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600); // listed for data passing throu a serial bus

}

void loop() {
  int buttonSwitch = digitalRead(button); // listen for button being clicked

  Serial.print(buttonSwitch);
  delay(200);
}
