void setup() {
  Serial.begin(31250);
  randomSeed(0);
}

void loop() {
  for (int note = 0; note < 0x7F; note++) {
    noteON(0x90, note, 0x7F);
    delay(random(125, 175));
    noteON(0x90, note, 0x00);
    delay(random(125, 175));
  }
}

void noteON(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}

