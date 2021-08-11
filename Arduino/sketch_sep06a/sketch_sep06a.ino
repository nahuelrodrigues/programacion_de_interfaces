const int pinLed[] = {5, 6, 7, 8, 9};
const int nPines = 5;
const int pinPote = 5;
int val, valPote;

void setup() {
  for (int i = 0; i < nPines; i++) {
    pinMode(pinLed[i], OUTPUT);
    digitalWrite(pinLed[i], LOW);
  }
}

void loop() {
  sampler();
  vumeter();
}

void sampler() {
  valPote = analogRead(pinPote);
  val = map(valPote, 0, 1023, 0, 5);
}

void vumeter() {
  for (int i = 0; i < val; i++) {
    digitalWrite(pinLed[i], HIGH);
  }
  if (val < 5) {
    for (int i = 5; i >= val; i--) {
      digitalWrite(pinLed[i], LOW);
    }
  }
}
