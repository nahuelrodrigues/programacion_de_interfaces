
int pinEN = 9;
int pin1A = 10;
int pin2A = 8;

int inPin = 6;
int analogPin = 5;

int pwm;
int estado_pin1A;
int estado_pulsador = HIGH;
int estado_pulsador_anterior = HIGH;

void setup() {
  
  pinMode(pinEN, OUTPUT);
  pinMode(pin1A, OUTPUT);
  pinMode(pin2A, OUTPUT);
  
  pinMode(inPin, INPUT);
  
  digitalWrite(pin1A,LOW);
  digitalWrite(pin2A,HIGH);
  estado_pin1A = LOW;

}

void loop() {
  
  estado_pulsador = digitalRead(inPin); 
  
  if (estado_pulsador!=estado_pulsador_anterior) {   
    if (estado_pulsador==LOW && estado_pulsador_anterior==HIGH) {
      if (estado_pin1A==HIGH) {
        digitalWrite(pin1A,LOW);
        digitalWrite(pin2A,HIGH);
        estado_pin1A = LOW;
      } else {
        digitalWrite(pin1A,HIGH);
        digitalWrite(pin2A,LOW);
        estado_pin1A = HIGH;
      }
    }   
    estado_pulsador_anterior = estado_pulsador;    
  }
  
  pwm = map(analogRead(analogPin),0,1023,0,255);
  
  analogWrite(pinEN, pwm);

}

  
