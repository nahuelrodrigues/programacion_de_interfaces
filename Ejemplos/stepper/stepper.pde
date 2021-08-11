
#include <Stepper.h>

int numpasos = 100;
int rpm = 10;
int valor;
Stepper stepper(numpasos, 7, 8, 9, 10);

void setup() {
  
  stepper.setSpeed(rpm);
  
}

void loop() {
   
  stepper.step(100);
  delay(1000);
  
}
