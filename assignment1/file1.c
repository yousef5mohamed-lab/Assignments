#include <stdio.h>
#include "file1.h"

// private function
static void swap(S32_t *x, S32_t *y)
{
    if (x == NULL || y == NULL)
    {
        return;
    }
    S32_t temp = *x;
    *x = *y;
    *y = temp;
}


// 1. Scan Char Array
void scanCharArray(U8_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    for(S32_t i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }
}

// Display Char Array
void displayCharArray(U8_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    for(S32_t i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
}

// Scan Int Array
void scanIntArray(S32_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    for(S32_t i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Display Int Array
void displayIntArray(S32_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    for(S32_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }   
}

// Ascending Sort
void ascsortIntArray(S32_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    S32_t temp;

    for(S32_t i = 0; i < size - 1; i++)
    {
        for(S32_t j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
              swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Descending Sort
void descsortIntArray(S32_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }

    S32_t temp;

    for(S32_t i = 0; i < size - 1; i++)
    {
        for(S32_t j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Maximum Number without sorting array
void getMaxNumberArrayNotSorted(S32_t arr[], S32_t size, S32_t *max)
{
    if (arr == NULL || size <= 0 || max == NULL)
    {
        return;
    }

    *max = arr[0];

    for(S32_t i = 1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
    }

    printf("Maximum Number = %d\n", *max);
}

// Maximum Number with sorting array
void getMaxNumberArraySorted(S32_t arr[], S32_t size, S32_t *max)
{
    if (arr == NULL || size <= 0 || max == NULL)
    {
        return;
    }
    descsortIntArray(arr, size);
    *max = arr[0];
}

// Count Repeated Number
S32_t getRepeatedNumberIntArray(S32_t arr[], S32_t size, S32_t target)
{
    if (arr == NULL || size <= 0)
    {
        return 0;
    }
    S32_t count = 0;

    for(S32_t i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }
    return count;
}

// Count Repeated Character
S32_t getRepeatedCharArray(U8_t arr[], S32_t size, U8_t target)
{
    if (arr == NULL || size <= 0)
    {
        return 0;
    }
    S32_t count = 0;

    for(S32_t i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    return count;
}

// Maximum Character
U8_t getMaximumCharArray(U8_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return '\0';
    }

    U8_t max = arr[0];

    for(S32_t i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

// Convert Char Array To Int Array
void convertCharArrayToIntArray(U8_t charArr[], S32_t size, S32_t intArr[])
{
    if (charArr == NULL || size <= 0 || intArr == NULL)
    {
        return;
    }
    for(S32_t i = 0; i < size; i++)
    {
        intArr[i] = (S32_t)charArr[i];
    }
}

// Reverse Int Array
void reverseIntArray(S32_t arr[], S32_t size)
{
    if (arr == NULL || size <= 0)
    {
        return;
    }
    for(S32_t i = 0; i < size / 2; i++)
        {
            swap(&arr[i], &arr[size - 1 - i]);
        }
    
}