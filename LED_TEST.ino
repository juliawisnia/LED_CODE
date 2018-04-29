#include "RGB_LED.h"

void setup() {
  // put your setup code here, to run once:
  initRGB(5, 3, 9); // analogWrite works on pins 3, 5, 6, 9, 10, 11
}

void loop() {
  // put your main code here, to run repeatedly:
 ramp(255, 255, 255, 5000, 100); 
 delay(1000);
}
