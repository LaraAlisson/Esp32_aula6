/*Bibliotecas arquivo CPP*/

#include <Arduino.h>
#include <rd_bts.hpp>

kb_rd::kb_rd(const int bt1, const int bt2):
pins{bt1,bt2}
{
    for (int i = 0; i < BTS_NUM; i++)
    {
        pinMode(pins[i], INPUT_PULLUP);
    }
    
}// End kb_rd

unsigned kb_rd::read_bt(const int btn, const int bounce)
{
    static char flag1 = 0, flag2 = 0;
    if(!digitalRead(pins[btn])) flag1 = 1;
    if(digitalRead(pins[btn])) flag2 = 1;
    if(flag1 && flag2)
    {
        flag1 = 0;
        flag2 = 0;
        delay(bounce);
        return 1;
    }

    return 0;
    
}