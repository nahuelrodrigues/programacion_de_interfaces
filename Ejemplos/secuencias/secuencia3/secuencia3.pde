int pins[] = {7, 8, 9, 10};
int npins = 4;
int n = 0;
int dir = 1;
int wait = 100;
int inPin = 6;
int analogPin = 5;
int estado = HIGH;
int estadop = HIGH;

void setup() {
  
  for (int i=0;i<npins;i++) {
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], LOW);
    
  }
  
  pinMode(inPin, INPUT);
  
}

void loop() {
  
  estado = digitalRead(inPin); 
  
  if (estado!=estadop) {   
    if (estado==LOW && estadop==HIGH) {
      dir = -dir;  
    }   
    estadop = estado;    
  }
  
  wait = map(analogRead(analogPin),0,1023,10,200);
  
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

  
