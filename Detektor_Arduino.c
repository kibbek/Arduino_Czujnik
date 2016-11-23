
#include <Wire.h>
#include <BH1750.h>

BH1750 lightMeter;
void writeInt(unsigned int value);

void setup() {
  Serial.begin(115200);
  lightMeter.begin();
}


void loop() {
  int lux = lightMeter.readLightLevel();
  writeInt(lux);
  delay(200);
}
void writeInt(unsigned int value) {
  Serial.write(lowByte(value));
  Serial.write(highByte(value));
}

