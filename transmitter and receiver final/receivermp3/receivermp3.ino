#include <CytronEZMP3.h>
#include <SoftwareSerial.h>

CytronEZMP3 mp3;

 #define rfReceivePin A0  //RF Receiver pin = Analog pin 0
 #define ledPin 13        //Onboard LED = digital pin 13

 unsigned int data = 0;   // variable used to store received data
 const unsigned int upperThreshold = 70;  //upper threshold value


boolean toggle = true;

void setup () {
  pinMode(ledPin, OUTPUT);
	Serial.begin(9600);
  if(!mp3.begin(2, 3))
  mp3.setDevice(2);
  mp3.setVolume(30);
}

void loop () {    
data=analogRead(rfReceivePin);    //listen for data on Analog pin 0
Serial.println(data);
     if (data>upperThreshold)
     {
      if(toggle)
      {
        mp3.playTrack(1);
       digitalWrite(ledPin, HIGH);
        delay(300000);
      }
     }
}
