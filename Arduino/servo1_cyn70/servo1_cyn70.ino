#include <Servo.h>
// declarar los 4 servos que faltan
// checkear todos los sensores que miden y en base a eso armar los umbrales
// para cada uno : sensorVal , n , subir, delay,

int pinReceptor1 = A1; //Establecemos el pin a leer
int sensorVal1; //Declaramos una variable para almacenar el valor de la lectura
int umbralSensor1 = 5;

int pinReceptor2 = A2; //Establecemos el pin a leer
int sensorVal2; //Declaramos una variable para almacenar el valor de la lectura
int umbralSensor2 = 3;

int pinReceptor3 = A3; //Establecemos el pin a leer
int sensorVal3; //Declaramos una variable para almacenar el valor de la lectura
int umbralSensor3 = 3;

int pinReceptor4 = A4; //Establecemos el pin a leer
int sensorVal4; //Declaramos una variable para almacenar el valor de la lectura
int umbralSensor4 = 4;

int pinReceptor5 = A5; //Establecemos el pin a leer
int sensorVal5; //Declaramos una variable para almacenar el valor de la lectura
int umbralSensor5 = 4;

Servo servo1, servo2, servo3, servo4, servo5;

int n = 90;
int subir = 1;
int timeOn = 150;

void setup() {
  Serial.begin(9600); // Abrimos comunicación Serial
  Serial.println("inicializando..."); //Sacamos la lectura por serial

  analogReference(INTERNAL);

  pinMode(13, OUTPUT);

  servo1.attach(2);
  servo1.write(90);

  servo2.attach(3);
  servo2.write(90);

  servo3.attach(4);
  servo3.write(90);

  servo4.attach(5);
  servo4.write(90);

  servo5.attach(6);
  servo5.write(90);

}

void loop() {
  sensado();


  //Sacamos la lectura por serial
  while (sensorVal1 < umbralSensor1) { // mano moviendose constantemente

    sensorVal1 = analogRead(pinReceptor1);
    if (n <= 0) {
      n = 0;
      subir = 0;
    }
    if (n >= 90) {
      n = 90;
      subir = 1;
    }

    servo1.write(n);

    if (subir == 1) { //sube
      n--;
    }
    if (subir == 0) { //vuelve
      n++;
    }
    delay(timeOn);
  }
  if (sensorVal1 > umbralSensor1) {//si encontro algo frena
    digitalWrite(13, HIGH);
  }

}

void sensado() {
  sensorVal1 = analogRead(pinReceptor1); //Guardamos la lectura del pin Analógico
  sensorVal2 = analogRead(pinReceptor2); //Guardamos la lectura del pin Analógico
  sensorVal3 = analogRead(pinReceptor3); //Guardamos la lectura del pin Analógico
  sensorVal4 = analogRead(pinReceptor4); //Guardamos la lectura del pin Analógico
  sensorVal5 = analogRead(pinReceptor5); //Guardamos la lectura del pin Analógico

  Serial.print(sensorVal1); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(sensorVal2); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(sensorVal3); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.print(sensorVal4); //Sacamos la lectura por serial
  Serial.print("   "); //Sacamos la lectura por serial
  Serial.println(sensorVal5); //Sacamos la lectura por serial
  delay(500);  //Pequeña pausa de medio segundo
}

