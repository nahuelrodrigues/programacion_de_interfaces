#include <VirtualWire.h>  

int pinPote = 4;    
int valPote;        
byte val;                       

void setup() {

  vw_set_tx_pin(12);
  vw_setup(2000);    

}

void loop () {
  
  valPote = analogRead(pinPote);
  val = map(valPote,0,1023,0,255);
            
  vw_send((uint8_t *)&val, 1);  

  delay(250);
  
}


