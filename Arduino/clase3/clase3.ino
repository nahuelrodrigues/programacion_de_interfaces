int pinesLED[] = {7, 8, 9, 10};
int nPines = 4;

int pinPulsador = 11;
int valPulsador;

int timeON = 1000;

void setup() {

  for (int i = 0; i < nPines; i++) {
    pinMode(pinesLED[i], OUTPUT);
    digitalWrite(pinesLED[i], LOW);

  }
  pinMode(pinPulsador, INPUT);
}

void loop() {
  void sensar();
  if (valPulsador == HIGH ) {
    generar_derecha();
  } else {
    generar_izquierda();
  }
}

void sensar() {
  valPulsador = digitalRead(pinPulsador);
}

void generar_derecha() {
  for (int i = 0; i < nPines; i++) {
    digitalWrite(pinesLED[i], HIGH);
    delay(timeON);
    digitalWrite(pinesLED[i], LOW);
  }
}

void generar_izquierda() {
  for (int i = nPines - 1; i < 0; i--) {
    digitalWrite(pinesLED[i], HIGH);
    delay(timeON);
    digitalWrite(pinesLED[i], LOW);
  }
}

