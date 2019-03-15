/* 
  RF Blink - Transmit sketch 
     Written by ScottC 17 Jun 2014
     Arduino IDE version 1.0.5
     Website: http://arduinobasics.blogspot.com
     Transmitter: FS1000A/XY-FST
     Description: A simple sketch used to test RF transmission.          
 ------------------------------------------------------------- */
 #define rfTransmitPin 4  //RF Transmitter pin = digital pin 4
const int ledPin =  12;          //Onboard LED = digital pin 13
const int buttonPin = 3;

 int buttonState = 0;  
void setup(){
pinMode(rfTransmitPin, OUTPUT);     
pinMode(ledPin, OUTPUT);  
pinMode(buttonPin, INPUT);  
 }
void loop(){
buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
digitalWrite(rfTransmitPin, HIGH);     //Transmit a HIGH signal
digitalWrite(ledPin, HIGH);            //Turn the LED on
  } else {
digitalWrite(rfTransmitPin,LOW);      //Transmit a LOW signal
digitalWrite(ledPin, LOW);            //Turn the LED off
  }
}
