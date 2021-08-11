int pinLEDs[] = {11, 10, 9, 8};
int nPines = 4;
int n = 0;
/*
  int pinLED1 = 8;
  int pinLED2 = 9;
  int pinLED3 = 10;
  int pinLED4 = 11;
*/
int timeON = 100;

void setup() {

  for (int i = 0; i < nPines; i++) {
    pinMode(pinLEDs[i], OUTPUT);
    digitalWrite(pinLEDs[i], LOW);
  }
}

void loop() {

  for (int i = 0; i < nPines; i++) {
    digitalWrite(pinLEDs[i], HIGH);
    delay(timeON);
   
  }

  for (int i = 3; i >= 0; i--) {
    digitalWrite(pinLEDs[i], LOW);
    delay(timeON);

  }



  //  n++;
  //
  //  if (n == nPines) {
  //    n = 0;
  //  }

}

/* Clase 1 - Programación de interfases
   1 simbolos
   2 vocabulario
   3 sintaxis
   4 semántica

  Siempre dsp de INT (variable) va un separador " ; "

  CLASE 2 -
  ARRAY
  Ciclo FOR



*/

