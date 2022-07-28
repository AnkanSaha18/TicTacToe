
#ifndef myLibrary_h
#define myLybrary_h

//#include <Arduino.h>
//#include <Keypad.h>
//#include <Adafruit_GFX.h>
//#include <Adafruit_SSD1306.h>
//#include <Wire.h>
//#include <SPI.h>

//#define SCREEN_WIDTH 128 // OLED display width, in pixels
//#define SCREEN_HEIGHT 64 // OLED display height, in pixels
//#define OLED_RESET 4     // Reset pin # (or -1 if sharing Arduino reset pin)
//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

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




//class coordinate
//{
//public:
//    int x;
//    int y;
//    coordinate(int, int);
//};
//
//void tableDisplay();


#endif