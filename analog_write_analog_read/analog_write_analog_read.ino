#define tune 1
#define sensor 3
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
    delay(500);
    
    while(swt == 0) {
      read = analogRead(tune)
    }
  }

  else {

  }
}
