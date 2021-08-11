int pot;
int valor;

void setup() {

  Serial.begin(9600);  

}

void loop() {
  
  pot = analogRead(0);
  valor = map(pot,0,1023,0,255);
  
  Serial.print(valor,BYTE);
    
}
