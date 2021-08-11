int ledPin = 9;
int inPin = 8;

int val = 0;
int oldval = 0;
int state = 0;

void setup() {

  pinMode(ledPin,OUTPUT);
  pinMode(inPin,INPUT);

}

void loop() {

  val = digitalRead(inPin);

  if ( (val==HIGH) && (oldval==LOW)) {
    state = 1 -state;
    delay(20);
  }

  oldval = val;

  if (state==1) {
    digitalWrite(ledPin,HIGH);
  } 
  else {
    digitalWrite(ledPin,LOW);
  }

}

