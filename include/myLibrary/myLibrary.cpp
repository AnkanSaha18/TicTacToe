#include <Arduino.h>

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
        delay(200);
        digitalWrite(pin, LOW);
        delay(200);
    }
    return;
}
