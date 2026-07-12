#include <stdio.h>
#include "matrix.h"

S16_t main()
{
    S16_t Matrix[ROWS][COLS];
    S16_t Sum;
    S16_t Target;

    printf("Enter Matrix Elements (%d x %d):\n", ROWS, COLS);
    for(U8_t i = 0; i < ROWS; i++)
    {
        for(U8_t j = 0; j < COLS; j++)
        {
            printf("Matrix[%hhu][%hhu] = ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\nMatrix:\n");
    for(U8_t i = 0; i < ROWS; i++)
    {
        for(U8_t j = 0; j < COLS; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }

        printf("\n");
    }
    Sum = sumMainDiagonal(Matrix);
    printf("\nSum Of Main Diagonal = %d\n", Sum);
    printf("\nEnter Number To Search: ");
    scanf("%d", &Target);
    searchElement(&Matrix[0][0], Target);
    return 0;
}