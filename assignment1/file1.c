#include <stdio.h>
#include "math.h"


// 1. Scan Char Array
void scanCharArray(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }
}

// Display Char Array
void displayCharArray(char arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
}

// Scan Int Array
void scanIntArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

// Display Int Array
void displayIntArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

// Ascending Sort
void ascsortIntArray(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Descending Sort
void descsortIntArray(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Maximum Number
void getMaxNumberArray(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum Number = %d\n", max);
}

// Count Repeated Number
void getRepeatedNumberIntArray(int arr[], int size, int target)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    printf("Number %d repeated %d time(s)\n", target, count);
}

// Count Repeated Character
void getRepeatedCharArray(char arr[], int size, char target)
{
    int count = 0;

    for(int i = 0; i < size; i++)
    {
        if(arr[i] == target)
        {
            count++;
        }
    }

    printf("Character %c repeated %d time(s)\n", target, count);
}

// Maximum Character
void getMaximumCharArray(char arr[], int size)
{
    char max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("Maximum Character = %c\n", max);
}

// Convert Char Array To Int Array
void convertCharArrayToIntArray(char charArr[], int size, int intArr[])
{
    for(int i = 0; i < size; i++)
    {
        intArr[i] = (int)charArr[i];
    }
}

// Reverse Int Array
void reverseIntArray(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}