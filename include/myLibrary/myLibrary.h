
#ifndef myLibrary_h
#define myLybrary_h

#include<Arduino.h>

class led
{
private:
    int pin;

public:
    led(int);
    void pinSetup();
    int getPin();
    void blinkLed();
};

void extraBlink(led);

#endif