#include <Wire.h>

#include <Adafruit_BMP085.h>



t_BMP085 bmp;
  


void setup() {

  Serial.begin(9600);

  if (!bmp.begin()) {

	Serial.println("Could not find a valid BMP085 sensor, check wiring!");

	while (1) {}
  
}

}
  


void loop() {

Serial.print("Temperature = ");

Serial.print(bmp.readTemperature());

Serial.println(" *C");

Serial.print("Pressure = ");

Serial.print(bmp.readPressure());

Serial.println(" Pa");

Serial.print("Real altitude = ");

Serial.print(bmp.readAltitude(101500));

Serial.println(" meters");

Serial.println();


delay(2000);

}
