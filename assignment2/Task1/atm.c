#include <stdio.h>
#include "atm.h"

void ProcessTransaction(F32_t *Balance, U8_t Type)
{
    static U32_t TransactionCount = 0;
    F32_t Amount;

    switch(Type)
    {
        case DEPOSIT:

            printf("Enter Deposit Amount: ");
            scanf("%f", &Amount);
            if(Amount > 0)
            {
                *Balance += Amount;
                TransactionCount++;
                printf("Deposit Successful.\n");
            }
            else
            {
                printf("Invalid Amount!\n");
             }

        break;

        case WITHDRAW:

            printf("Enter Withdraw Amount: ");
            scanf("%f", &Amount);

            if(Amount>0 && Amount<=*Balance)
            {
                *Balance -= Amount;
                TransactionCount++;
                printf("Withdraw Successful.\n");
            }
            else
            {
                printf("Invalid Amount!\n");
            }

        break;

        case PRINT_TRANSACTION:

            printf("Total Valid Transactions = %lu\n", TransactionCount);

        break;


        default:
            printf("Invalid Transaction!\n");
    }

}