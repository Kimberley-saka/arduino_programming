#define tune 1
#define sensor 1
#define led 10
#define button 7


int swt = 0; // switch
int brightness = 0;
int read = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {
  swt = digitalRead(button);
  
  if(swt == 1) { // if button is pressed
    delay(200);

    swt = digitalRead(button);
    
    while(swt == 0) {
      swt = digitalRead(button);
      read = analogRead(tune);
      brightness = map(read, 0, 1023, 0, 255); // map(input, min-input, max-input, min-output, max-output)
      analogWrite(led, brightness);
    }

    digitalWrite(led, LOW);
    delay(200);
  }

  else {
    read = analogRead(sensor);
    brightness = map(read, 0, 1023, 0, 255);
    analogWrite(led, brightness);

  }
}
