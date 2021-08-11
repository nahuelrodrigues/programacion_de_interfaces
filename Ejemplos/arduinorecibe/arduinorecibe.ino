const int pinPWM = 9;
int valor;

void setup() {

  Serial.begin(9600);  

}

void loop() {
  
  if (Serial.available() > 0) {
    
    valor = Serial.read();   
    analogWrite(pinPWM,valor);
    
    Serial.write(valor);
    
  }
    
}
