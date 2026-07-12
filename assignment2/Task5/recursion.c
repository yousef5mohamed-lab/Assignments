#include "recursion.h"

S32_t power(S32_t Base, S32_t Exponent)
{
    if(Exponent == 0)
    {
        return 1;
    }

    return Base * power(Base, Exponent - 1);
}
S32_t sumDigits(S32_t Number)
{
    if(Number == 0)
    {
        return 0;
    }

    return (Number % 10) + sumDigits(Number / 10);
}