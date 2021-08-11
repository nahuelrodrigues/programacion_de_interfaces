#include <SPI.h>
#include <SD.h>

File myFile;
char letra;
//int letra;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Inicializando SD...");
 
  SD.begin();
  
  Serial.println("OK...");
  Serial.println();
  
  myFile = SD.open("testread.txt");
  
}

void loop() {
  
  if (myFile.available()>0) {
        
    letra = myFile.read();
    Serial.print(letra);
    delay(500);
    
  } else {
    
    myFile.seek(0);
    Serial.println();
    Serial.println("Empezando de nuevo...");
    Serial.println();
    delay(500);
    
  }
  	
}


