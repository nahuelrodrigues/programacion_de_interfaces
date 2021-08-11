#include <Ultrasonic.h>
#include <Servo.h>

  
//declaramos un objeto ultrasonic de la la librería Ultrasonic para referirnos a ella.  
Ultrasonic ultrasonic(7,A0);      
  
//declaramos un objeto miservo de la la libreria Servo para referirnos a ella.  
Servo miservo;    
  
int Distancia;  
  
void setup(){  
  // esto me sirve para imprimir
  Serial.begin(9600);
    //definimos el pin2 para controlar el servo  
    miservo.attach(3);  
  
    // coloca el servo en su posición central  
    miservo.write(90);    
}  
  
void loop(){  
  
    //leemos el sensor de ultrasonidos y guardamos el valor en una variable  
    Distancia = ultrasonic.Ranging(CM);  
    //esto me imprime la distancia
    Serial.print(ultrasonic.Ranging(CM)); // CM or INC
    Serial.println(" cm" );
    //si la distancia es menor de 20...  
    if(Distancia <= 50){  
  
        //movemos el servo en una dirección  
        miservo.write(0);  
        delay(500);  
  
        //movemos el servo en dirección opuesta  
        miservo.write(180);  
        delay(500);  
    }else{  
  
        //si no hay nada, vamos mirando de frente  
        miservo.write(90);  
    }  
  
    delay(500);  
}  
