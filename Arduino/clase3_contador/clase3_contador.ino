int pinLed[] = {7, 8, 9, 10};
const int nPines = 4;
int pushBtnVal = 0;
const int pinPushBtn = 11;
const int timeOn = 1000;
int i = 0;

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
  if (pushBtnVal == LOW) {
    rightLeft();
  } else {
    leftRight();
  }
}

void rightLeft() {
  if (i <= 4) {
    blinkLed(pinLed[i]);
    i++;  
  } else {
    i = 0;
  }
}

void leftRight() {
  if (i >= 0) {
    blinkLed(pinLed[i]);
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
