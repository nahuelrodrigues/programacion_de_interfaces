#include <SPI.h>
#include <SD.h>

File myFile;
int val;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Inicializando SD...");
 
  SD.begin();
  
  Serial.println("OK...");
  Serial.println();
  
  myFile = SD.open("testvals.txt");
  
}

void loop() {
  
  if (myFile.available()>0) {
        
    val = myFile.parseInt();
    Serial.println(val);
    delay(500);
    
  } else {
    
    myFile.seek(0);
    Serial.println();
    Serial.println("Empezando de nuevo...");
    Serial.println();
    delay(500);
    
  }
  	
}


