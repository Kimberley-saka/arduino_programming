#define ledLight 3

void setup() {
  
  pinMode(ledLight, OUTPUT);

}

void loop() {
  digitalWrite(ledLight, HIGH); // turning on the led via transistor

}
