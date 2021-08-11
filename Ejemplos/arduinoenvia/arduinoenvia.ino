const int pinPote = 0;
int valPote;
int valor;

void setup() {

  Serial.begin(9600);  

}

void loop() {
  
  valPote = analogRead(pinPote);
  valor = map(valPote,0,1023,0,255);

  Serial.write(valor);
  
  //Serial.print(valor);
  //Serial.println(valor);
  
}
