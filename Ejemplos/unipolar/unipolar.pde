int pines[] = {7,8,9,10};
int numpines = 4;
int delayOn = 200;

int inPin = 5;

int n = numpines - 1;

void setup() {
 
  for (int i=0;i<numpines;i++) {
   pinMode(pines[i],OUTPUT);
   digitalWrite(pines[i],LOW);
  }
  pinMode(inPin,INPUT);

}

void loop() 

  digitalWrite(pines[n],HIGH);
  delay(delayOn);
  digitalWrite(pines[n],LOW);
  
  if (digitalRead(inPin)==HIGH) {
    n++;
  } else {
    n--;
  }
    
  if (n==numpines) {
    n=0;
  }
  if (n<0) {
    n=numpines -1;
  }
  
}
