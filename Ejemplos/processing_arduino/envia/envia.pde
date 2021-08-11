import processing.serial.*; 

Serial port; 

void setup() {

  size(800, 150);
  background(0);

  port = new Serial(this, "COM3", 9600);
  //port = new Serial(this, Serial.list()[0], 9600);    //MAC
  
}

void draw() { 
 
  port.write(int(map(mouseX,0,width,0,255)));
  
}

