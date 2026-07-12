#include <stdio.h>
#include "string.h"
#define maxStringLength 100

extern U16_t VowelCount;

U16_t main()
{
    
    U8_t String[maxStringLength]= {0};

    printf("Enter a single word: ");
    scanf("%s", String);

    modifyString(String);

    printf("\nModified String = %s\n", String);
    printf("Number of Vowels = %hu\n", VowelCount);

    return 0;
}