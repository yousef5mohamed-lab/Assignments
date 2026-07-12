#include<stdio.h>
#include "string.h"

U16_t VowelCount = 0;

void modifyString(U8_t *str)
{
    VowelCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a')||(*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u')
         ||(*str == 'A')||(*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))
        {
            VowelCount++;
        }
        else {}
        
        
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}