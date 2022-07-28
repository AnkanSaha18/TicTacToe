#include <Arduino.h>

led::pin;
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
