int pins[] = {7, 8, 9, 10};
int npins = 4;
int n = 0;
int dir = 1;
int wait = 200;
int inPin = 6;

void setup() {
  
  for (int i=0;i<npins;i++) {
    pinMode(pins[i], OUTPUT);
  }
  
  pinMode(inPin, INPUT);
  
}

void loop() {
  
  if (digitalRead(inPin)==HIGH) {
    dir = 1;
  } else {
    dir = -1;
  }
  
  digitalWrite(pins[n], HIGH);
  delay(wait);
  digitalWrite(pins[n], LOW);

  n+=dir;
  
  if (n==npins) {
    n = 0;
  }
  
  if (n==-1) {
    n = npins-1;
  }

}
  
