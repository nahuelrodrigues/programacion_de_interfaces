import processing.serial.*;

Serial port;
int bytein;

void setup() {

  size(400,400);

  port = new Serial(this, "COM3", 9600);
  //port = new Serial(this, Serial.list()[0], 9600);    //MAC
  
}

void draw() {

  //println(bytein);
  background(bytein,0,0);
  
}

void serialEvent (Serial myPort) {

   bytein = myPort.read();
 
}
