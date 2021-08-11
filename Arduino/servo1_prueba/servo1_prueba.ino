#include <Servo.h>
Servo servo1;
int pos1 = 0;
void setup() {

servo1.attach(9);
/*servo1.write(180);*/
}

void loop() 
{
  
  for(pos1 = 0; pos1 < 180; pos1 += 1)
  {
   servo1.write(pos1);
   delay(10);
  }
  for (pos1 = 180; pos1>=1; pos1 -=1)
  {
    servo1.write(pos1);
    delay(10);
  }
  }
  
  

