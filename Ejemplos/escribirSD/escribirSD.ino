#include <SPI.h>
#include <SD.h>

File logFile;
char letra;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Inicializando SD...");
 
  SD.begin();
  
  Serial.println("OK...");
  Serial.println();
  
  if (SD.exists("log.txt")) {
    Serial.println("El archivo log.txt existe... eliminando.");
    SD.remove("log.txt");
  } else {
    Serial.println("El archivo log.txt no existe...");
  }
  
}

void loop() {
  
  if (Serial.available()>0) {
    
    letra = Serial.read();
    
    logFile = SD.open("log.txt", FILE_WRITE);
    logFile.print(letra);
    logFile.close();
    
    Serial.println(letra);
    
  }
	
}
