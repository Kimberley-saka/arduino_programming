void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT); // pinMode(pinNumber, function); to select the pin number and as an output
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
  


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  delay(500);

  digitalWrite(11,LOW);
  digitalWrite(10, LOW);

  delay(500);
  


  

}
