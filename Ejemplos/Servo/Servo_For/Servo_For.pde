#include <Servo.h> 

Servo myservo;

int pos = 0;
int minpos = 0;
int maxpos = 180;
int suma = 1;
float delayval = 25;

void setup(){ 
  myservo.attach(9);
  myservo.write(minpos);
} 

void loop(){ 
  for(pos = 0; pos < maxpos; pos += suma){
    myservo.write(pos);
    delay(delayval);
  } 
  for(pos = maxpos; pos >= 1; pos -= suma){
    myservo.write(pos);
    delay(delayval);
  }
}

