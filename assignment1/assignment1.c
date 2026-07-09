#include <stdio.h>
#include "math.h"

int main()
{
    char charArr[100];
    int intArr[100];
    int charSize;
    int intSize;
    int targetNumber;
    char targetChar;

    // 1. Scan & Display Char Array
    printf("Enter size of char array: ");
    scanf("%d", &charSize);

    printf("Enter %d characters:\n", charSize);
    scanCharArray(charArr, charSize);

    printf("Char Array: ");
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

    // 3. Maximum Number
    getMaxNumberArray(intArr, intSize);

    printf("\n");

    // 4. Count Repeated Number
    printf("Enter number to search: ");
    scanf("%d", &targetNumber);

    getRepeatedNumberIntArray(intArr, intSize, targetNumber);

    printf("\n");

    // 5. Count Repeated Character
    printf("Enter character to search: ");
    scanf(" %c", &targetChar);

    getRepeatedCharArray(charArr, charSize, targetChar);

    printf("\n");

    // 6. Maximum Character
    getMaximumCharArray(charArr, charSize);

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