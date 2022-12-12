
#include <Servo.h>

Servo myservo;  // create servo object to control a servo,can get to eight
int pos = 0;    // variable to store the servo position

const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;  

void setup() {
  Serial.begin(9600);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
   // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    // turn LED on:
    opens();
    digitalWrite(ledPin, HIGH);
  }
 


if(buttonState == LOW){
  closes();
  digitalWrite(ledPin, LOW);
}

}

void opens(){
   for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              
    delay(50);                       // waits 15ms for the servo to reach the position
  }
  }
  void closes(){
    for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              
    delay(50);                       // waits 15ms for the servo to reach the position
  }
    }
