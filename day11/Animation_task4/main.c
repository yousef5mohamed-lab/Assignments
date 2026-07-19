#include<stdio.h>
#include<stdint.h>
#include"Animation_private.h"
#include"Animation_Interface.h"



void main()
{
    LED_Init();

    while(1)
    {
        LED_Animation();

        LED_Blink();
    }
}