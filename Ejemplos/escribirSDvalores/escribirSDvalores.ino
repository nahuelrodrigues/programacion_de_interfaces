#include <SPI.h>
#include <SD.h>

File logFile;
int valor;

void setup() {
  
  Serial.begin(9600);
  Serial.println("Inicializando SD...");
 
  SD.begin();
  
  Serial.println("OK...");
  Serial.println();
  
  if (SD.exists("logval.txt")) {
    Serial.println("El archivo logval.txt existe... eliminando.");
    SD.remove("logval.txt");
  } else {
    Serial.println("El archivo logval.txt no existe...");
  }
  
}

void loop() {
  
  if (Serial.available()>0) {
    
    valor = Serial.read();
    
    logFile = SD.open("logval.txt", FILE_WRITE);
    logFile.println(valor);
    logFile.close();
    
    Serial.println(valor);
    
  }
	
}
