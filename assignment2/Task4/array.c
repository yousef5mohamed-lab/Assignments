#include <stdio.h>
#include "array.h"

void swap(S16_t *a, S16_t *b)
{
    S16_t Temp;

    Temp = *a;
    *a = *b;
    *b = Temp;
}

void bubbleSort(S16_t arr[], U8_t size)
{
    for(U8_t i = 0; i < size - 1; i++)
    {
        for(U8_t j = 0; j < size - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(S16_t arr[], U8_t size)
{
    for(U8_t i = 0; i < size; i++)
    {
        printf("%hd ", arr[i]);
    }

    printf("\n");
}