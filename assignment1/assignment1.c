#include <stdio.h>
#include "file1.h"

int main()
{
    U8_t charArr[MAX_SIZE];
    S32_t intArr[MAX_SIZE];
    S32_t charSize;
    S32_t intSize;
    S32_t targetNumber;
    U8_t targetChar;
    S32_t maxNumber;
    S32_t repeatedCount;
    U8_t maxChar;

    // 1. Scan & Display Char Array
    printf("Enter size of char array: ");
    scanf("%d", &charSize);

    printf("Enter %d characters:\n", charSize);
    scanCharArray(charArr, charSize);

    printf("\nChar Array: ");
    displayCharArray(charArr, charSize);
    printf("\n\n");

    // 1. Scan & Display Int Array
    printf("Enter size of int array: ");
    scanf("%d", &intSize);

    printf("Enter %d integers:\n", intSize);
    scanIntArray(intArr, intSize);

    printf("Integer Array: ");
    displayIntArray(intArr, intSize);
    printf("\n\n");

    // 2. Sort Ascending
    ascsortIntArray(intArr, intSize);

    printf("Ascending Sort: ");
    displayIntArray(intArr, intSize);
    printf("\n");

    // Sort Descending
    descsortIntArray(intArr, intSize);

    printf("Descending Sort: ");
    displayIntArray(intArr, intSize);
    printf("\n\n");

    // 3. Maximum Number without sorting array
    getMaxNumberArrayNotSorted(intArr, intSize, &maxNumber);
    printf("Maximum Number (without sorting): %d\n", maxNumber);

    // Maximum Number with sorting array
    getMaxNumberArraySorted(intArr, intSize, &maxNumber);
    printf("Maximum Number (with sorting): %d\n", maxNumber);

    // 4. Count Repeated Number
    printf("Enter number to search: ");
    scanf("%d", &targetNumber);

    repeatedCount =  getRepeatedNumberIntArray(intArr, intSize, targetNumber);
    printf("Number of repetitions of %d: %d\n", targetNumber, repeatedCount);

    printf("\n");

    // 5. Count Repeated Character
    printf("Enter character to search: ");
    scanf(" %c", &targetChar);

    repeatedCount = getRepeatedCharArray(charArr, charSize, targetChar);
    printf("Number of repetitions of '%c': %d\n", targetChar, repeatedCount);

    printf("\n");

    // 6. Maximum Character
    maxChar = getMaximumCharArray(charArr, charSize);
    printf("Maximum Character: '%c'\n", maxChar);

    printf("\n");

    // 7. Convert Char Array to Int Array
    convertCharArrayToIntArray(charArr, charSize, intArr);

    printf("ASCII Values:\n");

    displayIntArray(intArr, charSize);

    printf("\n\n");

    // 8. Reverse Integer Array
    reverseIntArray(intArr, charSize);

    printf("Reversed Integer Array:\n");

    displayIntArray(intArr, charSize);

    printf("\n");

    return 0;
}