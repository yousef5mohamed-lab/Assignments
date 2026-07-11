#include <stdio.h>
#include "atm.h"

int main(void)
{
    F32_t Balance = 100.0;
    U8_t Choice;

    do
    {
        printf(" ATM MENU \n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%hhu", &Choice);

        switch(Choice)
        {
            case 1:

                ProcessTransaction(&Balance, DEPOSIT);

            break;

            case 2:

                ProcessTransaction(&Balance, WITHDRAW);

            break;

            case 3:

                printf("\nCurrent Balance = %f\n", Balance);

            break;

            case 4:

                ProcessTransaction(&Balance, PRINT_TRANSACTION);

            break;

            default:

                printf("\nInvalid Choice!\n");
        }

    }while(Choice != 4);

    return 0;
}