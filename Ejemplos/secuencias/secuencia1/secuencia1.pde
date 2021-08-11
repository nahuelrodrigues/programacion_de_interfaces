int pins[] = {7, 8, 9, 10};
int npins = 4;
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
     forward();
  } else {
     backward();
  }

}

void forward() {
 
  for (int i=0;i<npins;i++) {
    digitalWrite(pins[i], HIGH);
    delay(wait);
    digitalWrite(pins[i], LOW);
  } 
  
}
  
void backward() {
 
  for (int i=npins-1;i>=0;i--) {
    digitalWrite(pins[i], HIGH);
    delay(wait);
    digitalWrite(pins[i], LOW);
  } 
  
}
