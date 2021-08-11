#include <Servo.h> 

Servo myservo;

int minpos = 0;
int maxpos = 180;
int delayval = 1000;

void setup() 
{ 
  myservo.attach(9);
} 


void loop(){
  myservo.write(minpos);
  delay(delayval);
  myservo.write(maxpos);
  delay(delayval);
} 




