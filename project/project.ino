#define joyStickSwitch 1
#define analogInputy 2
#define analogInputX 3


void setup() {
pinMode(joyStickSwitch, INPUT);

Serial.begin(9600);

}

void loop() {

int SwitchRead = digitalRead(joyStickSwitch);

int ReadY = analogRead(analogInputy);

int ReadX = analogRead(analogInputX);
int outputY1 = map(ReadY, 511, 1023, 0, 100);
int outputX1 = map(ReadX, 511, 1023, 0, 100);

if (outputY1 < 2 ) {
  int outputY2 = map(ReadY, 511, 0, 0, 100); // handles negative values
  Serial.print("Neg-to-posY: ");
  Serial.println(outputY2);

}

else {
  Serial.print("Y-axis");
  Serial.println(outputY1);
}

delay(200);

if (outputX1 < 2 ) {
 int outputX2 = map(ReadX, 511, 0, 0, 100);
 Serial.print("Neg-to-posX: ");
 Serial.println(outputX2);
}

else {  
  Serial.print("X-axis");
  Serial.println(outputX1);
}









}
