int valor;

void setup() {

  Serial.begin(9600);  

}

void loop() {
  
  if (Serial.available() > 0) {
    
    valor = Serial.read();   
    analogWrite(9,valor);
    
    //tone(8,map(valor,0,255,100,1000));
    
  }
    
}
