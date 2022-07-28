#include "myLibrary.h"

#include "Arduino.h"
//#include <Keypad.h>
//#include <Adafruit_GFX.h>
//#include <Adafruit_SSD1306.h>
//#include <Wire.h>
//#include <SPI.h>

//#define SCREEN_WIDTH 128 // OLED display width, in pixels
//#define SCREEN_HEIGHT 64 // OLED display height, in pixels
//#define OLED_RESET 4     // Reset pin # (or -1 if sharing Arduino reset pin)
//Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

led::led(int a)
{
    pin = a;
}
void led::pinSetup()
{
    pinMode(pin, OUTPUT);
    Serial.begin(9600);
}
int led::getPin()
{
    return pin;
}
void led::blinkLed()
{
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    delay(1000);
    Serial.println("led blinked \n");
}

void extraBlink(led ob)
{
    int pin = ob.getPin();
    for (int i = 0; i < 100; i++)
    {
        digitalWrite(pin, HIGH);
        delay(15);
        digitalWrite(pin, LOW);
        delay(30);
    }
    return;
}







//coordinate::coordinate(int a, int b)
//{
//    x = a;
//    y = b;
//}
//
//void tableDisplay()
//{
//    display.setCursor(0, 0);
//    display.setTextSize(1);
//    display.setTextColor(WHITE);
//    for (int j = 0; j < 64; j++)
//    {
//        for (int i = 0; i < 64; i++)
//        {
//            if (i == 20 || i == 21 || i == 42 || i == 43 || j == 20 || j == 21 || j == 42 || j == 43)
//            {
//                display.drawPixel(i, j, WHITE);
//                //display.display();
//            }
//            //delay(20);
//        }
//        display.display();
//    }
//    display.display();
//    delay(2000);
//}
//