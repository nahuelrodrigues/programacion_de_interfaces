const int pines[] = {7, 8, 9, 10};
const int numpines = 4;

const int inPin = 5;

int n = 0;

void setup() {

  for (int i = 0; i < numpines; i++) {
    pinMode(pines[i], OUTPUT);
    digitalWrite(pines[i], LOW);
  }
  pinMode(inPin, INPUT);

}

void loop() {
  mover(100, 100);
  delay(1000);
  mover(50, 100);
  delay(1000);
  mover(-100, 200);
  delay(1000);
}

void mover(int numPasos, int delayPasos){
  if(numPasos >= 0){
    avanzar(numPasos, delayPasos);
  }else{
    retroceder(abs(numPasos), delayPasos);
  }
}

void avanzar(int numPasos, int delayPasos) {
  for (int i = 0; i < numPasos; i++) {
    digitalWrite(pines[n], HIGH);
    delay(delayPasos);
    digitalWrite(pines[n], LOW);
    n++;
    if (n == numpines) {
      n = 0;
    }
  }
}

void retroceder(int numPasos, int delayPasos) {
  for (int i = 0; i < numPasos; i++) {
    digitalWrite(pines[n], HIGH);
    delay(delayPasos);
    digitalWrite(pines[n], LOW);
    n--;
    if (n < 0) {
      n = numpines - 1;
    }
  }
}
