#include<stdio.h>
#include<stdint.h> //uint8_t
#include"Switch_Private.h"


void main(){

uint8_t state = 0;
 
 ClearBit(DDRA_Reg,4);
 SetBit(DDRD_Reg,5);

while(1){
 state = ReadBit(PINA_Reg,4);

    if(state==Pressed)
    {
    ClearBit(PORTD_Reg,5);

    }
    else if (state==NotPressed)
    {
      
    SetBit(PORTD_Reg,5);

    }


}


}