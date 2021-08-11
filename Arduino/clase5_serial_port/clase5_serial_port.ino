int pinPote = 0;
int valPote = 0;
int valSerial;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valPote = analogRead (pinPote);
  valSerial = map(valPote, 0, 1023, 0, 255);
//  Serial.write(valSerial);
 Serial.println(valSerial);
  delay(500);
}
