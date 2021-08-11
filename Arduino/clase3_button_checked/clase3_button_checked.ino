int pinLed[] = {7,8,9,10};
const int nPines = 4;
int pushBtnVal = 0;
const int pinPushBtn = 11;
const int timeOn = 1000;

void setup() {
  for (int i = 0; i < nPines; i++) {
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
  if (pushBtnVal == HIGH) {
    rightLeft();
  } else {
    leftRight();
  }
}

void rightLeft() {
  for (int i = 0; i < nPines; i++) {
    blinkLed(pinLed[i]);
  }
}

void leftRight() {
  for (int i = nPines - 1; i >= 0; i--) {
    blinkLed(pinLed[i]);
  }
}

void blinkLed(int pinLed) {
  digitalWrite(pinLed, HIGH);
  delay(timeOn);
  digitalWrite(pinLed, LOW);
}
