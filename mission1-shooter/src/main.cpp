#include <Arduino.h>
#include "Servo.h"

// put function declarations here:
// int myFunction(int, int);

//set potentiometer output pin
//int outputpin=10; //set outputvoltage pin
const int potenreadpin=A0; 
  int IN1=5;
  int IN2=6;     //set IN1,IN2,ENA pin
  int ENA=3;//attach motor
void setup() {
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT); //5V/1024 unit 12V-0V
  pinMode(potenreadpin,INPUT); //to motor
  Serial.begin(9600);
}

void loop() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
  int potenvoltage=analogRead(potenreadpin); //set analog voltage to moter
  // int result = myFunction(2, 3);
  int pwm=map(potenvoltage,0,1023,0,255);
  analogWrite(ENA,255);
  Serial.println(pwm);
  // digitalWrite(ENA,255);
}
