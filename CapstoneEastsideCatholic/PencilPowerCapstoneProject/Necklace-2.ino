
/*
 * DAY 3, PART 2
 * Mapping sensor values
 * By Your Name(s)
 * Description of what the code does
 * 
 */



int sensorPin = A5;
int sensorVal;
int ledPin = 10;
int ledPin2 = 9;
int ledPin3 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensorPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  sensorVal = analogRead(sensorPin); //read the sensor data coming in
  int newSensorVal = map(sensorVal,330,240,255,0); //create a new variable to store the mapped values
  newSensorVal = constrain(newSensorVal,0,255);
  Serial.println(newSensorVal);         //print the sensor values to the serial monitor
  analogWrite(ledPin, newSensorVal);  //write the values of the sensor to the LED
  analogWrite(ledPin2, newSensorVal);  
  analogWrite(ledPin3, newSensorVal);
}
