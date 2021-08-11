const int pinPote = 5;
const int pinDimmer = 5;
int valPote, valDimmer;

void setup() {

}

void loop() {
  sensar();
  setearDimmer();
}

void sensar() {
  valPote = analogRead(pinPote);
  valDimmer = map(valPote, 0, 1023, 0, 255);
}

void setearDimmer() {
  analogWrite(pinDimmer, valPote);
}
