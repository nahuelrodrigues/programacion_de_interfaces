//para hacer prender un led

void setup {
  pinMode(13, OUTPUT);
}

void loop {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);
}

//FIN

// clase 1 prender leds
// primero declaro entradas, salidas, numeros y valores
//para las variables

int pinLEDs [] = {11, 10, 9, 8}
int nPines = 4;
int n = 0;
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
}

//FIN

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
//FIN

//CONTADOR

int pinLed[] = {7, 8, 9, 10};
const int nPines = 4;
int pushBtnVal = 0;
const int pinPushBtn = 11;
const int timeOn = 1000;
int i = 0;

void setup() {

  for (int i = 0; i < nPines, i++) {
    pinMode(pinLed[i], OUTPUT);
    digitalWrite(pinLed[i], LOW);
  }
  pinMode(pinPushBtn, INPUT);
}
void loop() {
  readBtn();
  writeLed();

}


void readBtn() {
  pushBtnVal = digitalRead(pinPushBtn);
}

void writeLed() {
  if (pushBtnVal == LOW {
  rightLeft();
  } {
    else {
      leftRight();
    }
  }

  void rightLeft() {
    if ( i <= 4) {
      blinkLed(pinLed[i]);
      i++;
    } else {
      i = 0
    }

  }
}

void leftRight() {
  if ( i >= 0 {
  blinkLed(pinLed[i];
  i--;
} else {
  i = 3;
}
}

void blinkLed(int pinLed) {
  digitalWrite(pinLed, HIGH);
  delay(timeOn);
  digitalWrite(pinLed, LOW);
}
}
//FIN

//SERIAL PORT

int pinPote = 0;
int valPote = 0;
int valSerial;

void setup() {
  Serial.begin(9600);}
  void loop() {
    valPote = analogRead (pinPote);
    valSerial = map(valPote, 0, 1023, 0, 255);
    Serial.println(valSerial);
    delay(500);
  }


