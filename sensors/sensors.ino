/*
* Reading from the light, temperature and microphone sensors
* Display read values to the serial monitor
*/


#define lightSensor 3
#define tempSensor 2
#define microphone 0

int readLightSensor = 0;
float readTempSensor =  0;
int readMicrophone = 0;


void setup() {
Serial.begin(9600);

}

void loop() {
/*
* This will read from the light sensor, temperature sensor and microphone
*/
  float tempValues = 0;
  int lightValues = 0;
  int micValues = 0;

  readLightSensor = analogRead(lightSensor);
  readTempSensor = analogRead(tempSensor);
  readMicrophone = analogRead(microphone);

  delay(2000);
 
  tempValues = map(readTempSensor, 0, 1023, 0, 100); //Map values to min 0, 100
  lightValues = map(readLightSensor, 0, 1023, 0, 100);
  micValues = map(readMicrophone, 0, 1023, 0, 100);

  Serial.print("Temperature:");
  Serial.println(tempValues);

  Serial.print("Light:");
  Serial.println(lightValues);

  Serial.print("Microphone:");
  Serial.println(micValues);

  Serial.println();



}
