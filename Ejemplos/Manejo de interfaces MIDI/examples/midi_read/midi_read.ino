#include <MIDI.h>

int LED = 9;
int val;

void setup() {
  MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(MyHandleNoteOn);
}

void loop() {
  MIDI.read();
}


void MyHandleNoteOn(byte channel, byte pitch, byte velocity) {
  if (pitch > 0) {
    val = map (pitch, 0, 127, 0, 255);
    analogWrite(LED, val);
  }
}
