// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    uLCD.reset();
    uLCD.background_color(0xFFFFFF); // white
    uLCD.textbackground_color(0xFFFFFF);
    uLCD.cls();
    uLCD.color(BLUE);
    uLCD.printf("\n107061135\n");
    uLCD.text_width(4); //4X size text
    uLCD.text_height(4);
    uLCD.color(GREEN);
    
    for (int i=30; i>=0; --i) {
        uLCD.locate(1,2);
        uLCD.printf("%2d",i);
        ThisThread::sleep_for(500ms);
    }
}