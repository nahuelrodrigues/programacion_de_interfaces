#include <Servo.h> //incluyo la librería de Servo-Motores
//Declaro pines del Sensor y Umbral de proximidad.
int pinSensor1 = 1;
int umbralSensor1 = 5;

int pinSensor2 = 2;
int umbralSensor2 = 3;

int pinSensor3 = 3;
int umbralSensor3 = 3;

int pinSensor4 = 4;
int umbralSensor4 = 4;

int pinSensor5 = 5;
int umbralSensor5 = 4;
//variables
int sensorVal1, sensorVal2, sensorVal3, sensorVal4, sensorVal5;
//declaro Servos
Servo servo1, servo2, servo3, servo4, servo5;
// Posición inicial 90º (dedos acostados) - 0º dedo en erguido en su posición máxima de estiramiento.
int posInitialServoMAX = 90;
int posServoMIN = 0;

int pos1 = posInitialServoMAX;
int pos2 = posInitialServoMAX;
int pos3 = posInitialServoMAX;
int pos4 = posInitialServoMAX;
int pos5 = posInitialServoMAX;
//boolean para abrir y cerrar
boolean cerrar1 = true;
boolean cerrar2 = true;
boolean cerrar3 = true;
boolean cerrar4 = true;
boolean cerrar5 = true;
//delay para la velocidad del movimiento
int timeOn = 100;

void setup() {
  Serial.begin(9600);
  Serial.println("inicializando...");

  analogReference(INTERNAL);
// un random con la entrada A0 para que entre ruido y naturalize un poco más el gesto
  randomSeed(analogRead(0));
//escribiendo la posición de los servos
  servo1.attach(2);
  servo1.write(posInitialServoMAX);

  servo2.attach(3);
  servo2.write(posInitialServoMAX);

  servo3.attach(4);
  servo3.write(posInitialServoMAX);

  servo4.attach(5);
  servo4.write(posInitialServoMAX);

  servo5.attach(6);
  servo5.write(posInitialServoMAX);

}
// 2 variables Sensar y Actuar
void loop() {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
  sensar();
  delay(timeOn + random(-50, 50));  //Pequeña pausa de control de velocidad de cerrado y apertura de los dedos
  actuar();
}
//Leyendo las variables
void sensar() {
  sensorVal1 = analogRead(pinSensor1);
  sensorVal2 = analogRead(pinSensor2);
  sensorVal3 = analogRead(pinSensor3);
  sensorVal4 = analogRead(pinSensor4);
  sensorVal5 = analogRead(pinSensor5);
//imprime lo que leen los varoles para poder manejar los sensores ya que depende mucho de la luz ambiente.
  Serial.print(sensorVal1);
  Serial.print("   ");
  Serial.print(sensorVal2);
  Serial.print("   ");
  Serial.print(sensorVal3);
  Serial.print("   ");
  Serial.print(sensorVal4);
  Serial.print("   ");
  Serial.println(sensorVal5);
}

void actuar() {
  dedo1();
  dedo2();
  dedo3();
  dedo4();
  dedo5();
}
//condicionales que comparan lo sensado con mi umbral.
//DEDO_1
void dedo1() {
  if (sensorVal1 < umbralSensor1) {
    if (pos1 <= posServoMIN) {
      pos1 = posServoMIN;
      cerrar1 = false;
    }
    if (pos1 >= posInitialServoMAX) {
      pos1 = posInitialServoMAX;
      cerrar1 = true;
    }
//escribe la posición
    servo1.write(pos1);

    if (cerrar1 == true) {
      pos1--;
    }
    if (cerrar1 == false) {
      pos1++;
    }
  }
}
//DEDO_2
void dedo2() {
  if (sensorVal2 < umbralSensor2) {
    if (pos2 <= posServoMIN) {
      pos2 = posServoMIN;
      cerrar2 = false;
    }
    if (pos2 >= posInitialServoMAX) {
      pos2 = posInitialServoMAX;
      cerrar2 = true;
    }

    servo2.write(pos2);

    if (cerrar2 == true) {
      pos2--;
    }
    if (cerrar2 == false) {
      pos2++;
    }
  }
}
//DEDO_3
void dedo3() {
  if (sensorVal3 < umbralSensor3) {
    if (pos3 <= posServoMIN) {
      pos3 = posServoMIN;
      cerrar3 = false;
    }
    if (pos3 >= posInitialServoMAX) {
      pos3 = posInitialServoMAX;
      cerrar3 = true;
    }

    servo3.write(pos3);

    if (cerrar3 == true) {
      pos3--;
    }
    if (cerrar3 == false) {
      pos3++;
    }
  }
}
//DEDO_4
void dedo4() {
  if (sensorVal4 < umbralSensor4) {
    if (pos4 <= posServoMIN) {
      pos4 = posServoMIN;
      cerrar4 = false;
    }
    if (pos4 >= posInitialServoMAX) {
      pos4 = posInitialServoMAX;
      cerrar4 = true;
    }

    servo4.write(pos4);

    if (cerrar4 == true) {
      pos4--;
    }
    if (cerrar4 == false) {
      pos4++;
    }
  }
}
//DEDO_5
void dedo5() {
  if (sensorVal5 < umbralSensor5) {
    if (pos5 <= posServoMIN) {
      pos5 = posServoMIN;
      cerrar5 = false;
    }
    if (pos5 >= posInitialServoMAX) {
      pos5 = posInitialServoMAX;
      cerrar5 = true;
    }

    servo5.write(pos5);

    if (cerrar5 == true) {
      pos5--;
    }
    if (cerrar5 == false) {
      pos5++;
    }
  }
}

