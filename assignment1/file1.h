#ifndef FILE1_H
#define FILE1_H

// type definitions
typedef unsigned char U8_t;
typedef signed int S32_t;

// macro definitions
#define MAX_SIZE 100

// 1. Scan & Display Char Array
void scanCharArray(U8_t arr[], S32_t size);
void displayCharArray(U8_t arr[], S32_t size);

// 1. Scan & Display Int Array
void scanIntArray(S32_t arr[], S32_t size);
void displayIntArray(S32_t arr[], S32_t size);

// 2. Sort Integer Array
void ascsortIntArray(S32_t arr[], S32_t size);
void descsortIntArray(S32_t arr[], S32_t size);

// 3. Maximum Number
void getMaxNumberArrayNotSorted(S32_t arr[], S32_t size, S32_t *max);
void getMaxNumberArraySorted(S32_t arr[], S32_t size, S32_t *max);

// 4. Count Repeated Number
S32_t getRepeatedNumberIntArray(S32_t arr[], S32_t size, S32_t target);

// 5. Count Repeated Character
S32_t getRepeatedCharArray(U8_t arr[], S32_t size, U8_t target);

// 6. Maximum Character
U8_t getMaximumCharArray(U8_t arr[], S32_t size);

// 7. Convert Char Array to Int Array
void convertCharArrayToIntArray(U8_t charArr[], S32_t size, S32_t intArr[]);

// 8. Reverse Integer Array
void reverseIntArray(S32_t arr[], S32_t size);

#endif