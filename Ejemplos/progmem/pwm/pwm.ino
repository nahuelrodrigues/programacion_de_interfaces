int pwm1[] = {255,100,38,200,150,21,10,100,5,80};
int pwm2[] = {21,210,100,87,23,140,90,12,200,120};
int ndatos = 10;
int n = 0;
int wait = 250;
int pwmPin1 = 9; 
int pwmPin2 = 10; 

void setup() {
   
  analogWrite(pwmPin1,0);
  analogWrite(pwmPin2,0);
  
}

void loop() {     

  analogWrite(pwmPin1,pwm1[n]);
  analogWrite(pwmPin2,pwm2[n]);
  
  delay(wait);
  
  analogWrite(pwmPin1,0);
  analogWrite(pwmPin2,0);
  
  n++;
  
  if (n==ndatos) {
    delay(5000);
    n = 0; 
  }
      
}
