#include <Servo.h> 

Servo myservo;
int minpos = 0;
int cenpos= 90;
int maxpos = 180;
int serial;
int delayval = 25;

void setup() 
{ 
  myservo.attach(9);
  myservo.write(cenpos);
  Serial.begin(9600);
} 

void loop(){
  if (Serial.available() > 0 ) {
    serial = Serial.read();

    if (serial == 49){
      myservo.write(minpos);
      Serial.println("0");
    }
    if (serial == 50){
      myservo.write(cenpos);
      Serial.println("90");
    }
    if (serial == 51){
      myservo.write(maxpos);
      Serial.println("180");
    }
  }
}
