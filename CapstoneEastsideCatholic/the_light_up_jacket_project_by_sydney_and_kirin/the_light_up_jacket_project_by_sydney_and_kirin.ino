/*
 * Push Button with Variables
 * By Your Names(s)
 * 
 * This sketch uses variables to store button and LED pins as well as the button state
 * to turn the LEDs on or off. It displays the status in the serial monitor.
 * 
 */

int right  = A5;  
int button = A4;
int buttonState;
int left2 = A8;
int button2 = A9;
int button2State;
int vibePin = 11; // the number of the vibe motor pin

1
void setup() {
  // put your setup code here, to run once:
  //LEDs
  pinMode(right, OUTPUT);
  pinMode(left2, OUTPUT);
  pinMode(vibePin, OUTPUT);
 
  //push button
  //flick switch
  pinMode(button, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  //read the button
  buttonState = digitalRead(button);
  
  //read the button2
  button2State = digitalRead(button2);
  
  //check to see if button is pressed
  if (buttonState == LOW) {
    //if pressed, turn on LED
    digitalWrite(right, HIGH);
  }
  else {
    // if not pressed, turn off LED 
    digitalWrite(right, LOW);
  }
 
  
  //check to see if button2 is pressed
  if (button2State == LOW) {
    //if pressed, turn on LED
    digitalWrite(left2, HIGH);
  }
  else {

    // if not pressed, turn off LED
    digitalWrite(left2, LOW);
  }

   //check to see if button is pressed OR button 2 is pressed 
   //if one of them is pressed the buzzer turns on 
   
  if (buttonState == LOW || button2State == LOW) {
    //if pressed
    //make vibe motor buzz
    digitalWrite(vibePin, HIGH);
    Serial.println("The Vibe Motor is on!");
  }
  
  else {

    // if not pressed, turn off LED 
    digitalWrite(vibePin,LOW);
    Serial.println("The Vibe Motor is off!");
  }

  //read the button2


}
