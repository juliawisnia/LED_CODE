#ifndef RGB_LED_h
#define RGB_LED_h
#include "Arduino.h"

void initRGB(int rpinval, int gpinval, int bpinval);
void setRGB(int Rin, int Gin, int Bin);
void ramp(int Rin, int Gin, int Bin, int delay_val, int maxsteps);

#endif
