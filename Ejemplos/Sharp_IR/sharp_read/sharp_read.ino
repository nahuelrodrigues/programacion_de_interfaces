#include <SharpIR.h>

#define ir A0
#define model 20150 //20150 for GP2Y0A02Y (20 to 150cm) or 1080 for GP2Y0A21Y (10 to 80)

SharpIR sharp(ir, 25, 93, model);

int dis;

void setup() {
  Serial.begin(9600);
}

void loop() {
  dis = sharp.distance(); // this returns the distance to the object you're measuring
  Serial.print("Distancia: ");
  Serial.println(dis);

  delay(500);
}
