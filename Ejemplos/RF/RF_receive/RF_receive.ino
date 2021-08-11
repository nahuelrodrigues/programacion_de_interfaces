#include <VirtualWire.h> 

void setup() {

  Serial.begin(9600);

  vw_set_rx_pin(11);
  vw_setup(2000);   
  vw_rx_start();    

}

void loop() {
  
  byte msg[VW_MAX_MESSAGE_LEN];
  byte len = VW_MAX_MESSAGE_LEN;

  if (vw_get_message(msg, &len)) {
    
    Serial.println(msg[0]);
    //Serial.write(msg[0]);
    
  }
  
}

