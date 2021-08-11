int pinReceptor1 = A1; //Establecemos el pin a leer
int pinReceptor2 = A2; //Establecemos el pin a leer
int pinReceptor3 = A3; //Establecemos el pin a leer
int pinReceptor4 = A4; //Establecemos el pin a leer
int pinReceptor5 = A5; //Establecemos el pin a leer

void setup() {
  Serial.begin(9600); // Abrimos comunicación Serial
  Serial.println("inicializando..."); //Sacamos la lectura por serial

  analogReference(INTERNAL);
}

void loop() {
  Serial.print(analogRead(pinReceptor1)); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(analogRead(pinReceptor2)); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(analogRead(pinReceptor3)); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(analogRead(pinReceptor4)); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.println(analogRead(pinReceptor5)); //Sacamos la lectura por serial
  delay(500);  //Pequeña pausa de medio segundo
}
