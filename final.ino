#include "SevSeg.h"
SevSeg sevseg;

void setup() {
  byte numDigits = 4;
  byte digitPins[] = {10,11,12,13};
  byte segmentPins[] = {9,2,3,5,6,8,7,4};

  bool resistorsOnSegments = true;
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_CATHODE;
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);       
}

void loop() {
  // put your main code here, to run repeatedly:
  sevseg.setNumber(10, 0);
  sevseg.refreshDisplay();
}
