#ifndef ATM_H
#define ATM_H
#include "../../Task_stdtype/stdtype.h"

#define PRINT_TRANSACTION 0
#define DEPOSIT           1
#define WITHDRAW          2

void ProcessTransaction(F32_t *Balance, U8_t Type);
void PrintTransactions();

#endif