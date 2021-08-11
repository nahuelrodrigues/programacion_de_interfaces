
int pinEN = 9;
int pin1A = 10;
int pin2A = 8;

int inPin = 6;
int analogPin = 5;

int pwm;

void setup() {

  pinMode(pinEN, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);

  pinMode(inPin, INPUT);

}

void loop() {

  if (digitalRead(inPin)==HIGH) {   
    digitalWrite(pin1A,LOW);
    digitalWrite(pin2A,HIGH);
  } 
  else {
    digitalWrite(pin1A,HIGH);
    digitalWrite(pin2A,LOW);
  }    

  pwm = map(analogRead(analogPin),0,1023,0,255);

  analogWrite(pinEN, pwm);

}


