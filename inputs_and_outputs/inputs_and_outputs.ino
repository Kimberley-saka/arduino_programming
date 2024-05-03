/**
* working with variables
*/

int button = 7; //digital pins
int led1 = 10;


void setup() {
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  Serial.begin(9600); // listen for data passing throu a serial bus

}

void loop() {
  int buttonSwitch = digitalRead(button); // listen for button being clicked

  Serial.print("Press: ");
  Serial.println(buttonSwitch);

  // delay(200);

  if (buttonSwitch == 1) {
    digitalWrite(led1, HIGH); // switch on led light if button is clicked
    delay(200); // delay of 200ms is the most optimal when it comes to buttons
  }

  else {
    digitalWrite(led1, LOW);
  }
}
