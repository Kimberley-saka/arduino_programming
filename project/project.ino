#define analogInputy 1
#define analogInputX 2

#define led2 2
#define led3 3
#define led4 4 
#define led5 5
#define led6 6 
#define led7 7
#define led8 8
#define led9 9
#define led10 10
#define led11 11




void setup() {
pinMode(led2, INPUT);
pinMode(led3, INPUT);
pinMode(led4, INPUT);
pinMode(led5, INPUT);
pinMode(led6, INPUT);
pinMode(led7, INPUT);
pinMode(led8, INPUT);
pinMode(led9, INPUT);
pinMode(led10, INPUT);
pinMode(led11, INPUT);

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
  digitalWrite();
  

}

else {
  Serial.print("Y-axis");
  Serial.println(outputY1);
}

delay(200);

if (outputX1 < 2 ) {
 int outputX2 = map(ReadX, 511, 0, 0, 100);
 digitalWrite()
}

else {  
  Serial.print("X-axis");
  Serial.println(outputX1);
}









}
