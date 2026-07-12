#include <stdio.h>
#include "recursion.h"

int main(void)
{
    S32_t Base;
    S32_t Exponent;
    S32_t Number;

    printf("Enter Base: ");
    scanf("%ld", &Base);

    printf("Enter Exponent: ");
    scanf("%ld", &Exponent);

    printf("\nPower = %ld\n", power(Base, Exponent));

    printf("\nEnter Number: ");
    scanf("%ld", &Number);

    printf("Sum Of Digits = %ld\n", sumDigits(Number));

    return 0;
}