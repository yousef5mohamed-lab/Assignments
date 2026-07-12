#include <stdio.h>
#include "array.h"

int main(void)
{
    S16_t Array[SIZE];

    printf("Enter %d Integers:\n", SIZE);

    for(U8_t i = 0; i < SIZE; i++)
    {
        printf("Element[%hhu] = ", i);
        scanf("%hd", &Array[i]);
    }

    printf("\nArray Before Sorting:\n");
    printArray(Array, SIZE);

    bubbleSort(Array, SIZE);

    printf("\nArray After Sorting:\n");
    printArray(Array, SIZE);

    return 0;
}