#include <stdio.h>
#include "matrix.h"

S16_t sumMainDiagonal(S16_t matrix[ROWS][COLS])
{
    S16_t Sum = 0;

    for(U8_t i = 0; i < ROWS; i++)
    {
        Sum += matrix[i][i];
    }

    return Sum;
}
void searchElement(S16_t *ptr, S16_t target)
{
    U8_t Found = 0;

    for(U8_t i = 0; i < ROWS; i++)
    {
        for(U8_t j = 0; j < COLS; j++)
        {
            if(*(ptr + (i * COLS) + j) == target)
            {
                printf("\nElement Found at Row %hhu, Column %hhu\n", i+1, j+1);
                Found = 1;
            }
        }
    }

    if(Found == 0)
    {
        printf("\nElement Not Found\n");
    }
}