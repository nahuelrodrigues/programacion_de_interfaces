// clase para aprender como usar un switch led + arduino
int pinLED = 9;
int pinPulsador = 10;


void setup() {

  pinMode(pinLED, OUTPUT);
  pinMode(pinPulsador, INPUT);

}

void loop() {

sensar();
  
  valPulsador = digitalRead(pinPulsador);
  if (valPulsador == HIGH) {
    digitalWrite(pinLED, HIGH);
  }
  else  {
    digitalWrite(pinLED, LOW);
  }
}
