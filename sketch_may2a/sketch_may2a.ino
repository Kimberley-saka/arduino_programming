void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT); // pinMode(pinNumber, function); to select the pin number and as an output
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(10, HIGH); // turn on the LED light, high
  
  delay(1000);

  digitalWrite(10, LOW);

  delay(1000);

  digitalWrite(11,  HIGH);

  delay(1000);

  digitalWrite(11, LOW);

  delay(1000);


  

}
