#include<stdio.h>
#include<stdint.h>
#include"Animation_private.h"
#include"Animation_Interface.h"
#include<util/delay.h>


void LED_Init(void)
{
    DDRA_Reg = 0xFF;
}

void LED_AllOn(void)
{
#if(ConnectionType==SinkConnection)

    PORTA_Reg = 0x00;

#else

    PORTA_Reg = 0xFF;

#endif
}

void LED_AllOff(void)
{
#if(ConnectionType==SinkConnection)

    PORTA_Reg = 0xFF;

#else

    PORTA_Reg = 0x00;

#endif
}

void LED_Animation(void)
{
    uint8_t i;

#if(ConnectionType==SinkConnection)

    PORTA_Reg = 0x00;

    _delay_ms(2000);

    for(i=0;i<8;i++)
    {
        SetBit(PORTA_Reg,i);

        _delay_ms(1000);
    }

#else

    PORTA_Reg = 0xFF;

   _delay_ms(2000);

    for(i=0;i<8;i++)
    {
        ClearBit(PORTA_Reg,i);

        _delay_ms(1000);
    }

#endif
}

void LED_Blink(void)
{
    uint8_t i;

    for(i=0;i<5;i++)
    {
        LED_AllOn();

        _delay_ms(500);

        LED_AllOff();

       _delay_ms(500);
    }
}