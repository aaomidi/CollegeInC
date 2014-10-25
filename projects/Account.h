#include <stdio.h>

void bank() {
    // Set the starting balance to 0.
    float balance = 0;
    // Set the status of the query to false.
    int status = 0;
    while (!status) {
        printf("Welcome to the Iron Bank of Braavos\n");
        printf("Please enter the account balance.\n");
        status = scanf("%f", &balance);
        // Flush the buffer for stdin. After we press the enter for the first time we still have the EOF aka \n somewhere in the buffer.
        setbuf(stdin, NULL);
        if (!status || balance < 0) {
            printf("You need to enter a number for the account balance and it can not be negative.");
            continue;
        }
    }
    int i = 0;
    float startingBalance = balance;
    float operatives[1024];
    printf("Please enter an operation you want to do with the account's balance.\nRemember the account balance can not be negative.\n");
    float operation = 0;
    scanf("%f", &operation);
    while (operation != 0) {
        setbuf(stdin, NULL);
        if (operation > 0) {
            balance += operation;
            printf("Your new balance is %.2f after adding %.2f to your balance.\n", balance, operation);
            operatives[i] = operation;
            i++;
        } else {
            if (balance + operation < 0) {
                printf("The account's balance can not be negative.\n");
                setbuf(stdin, NULL);
            } else {
                balance += operation;
                operatives[i] = operation;
                printf("Your new balance is %.2f after removing %.2f from your balance.\n", balance, operation * -1);
                i++;
            }
        }
        printf("Please enter a new operation to preform on your account's balance.\n");
        scanf("%f", &operation);
    }
    for (operation = 0; operation < 100; operation++) {
        printf("=");
    }
    printf("\nBalance: %9.2f\n", startingBalance);
    for (operation = 0; operation < 100; operation++) {
        printf("-");
    }
    printf("\n%-15s|%-10s|%-10s|%-10s\n", "Operation", "Deposit", "Withdrawl", "Balance");
    for (operation = 0; operation < 100; operation++) {
        printf("-");
    }
    printf("\n");
    int b;
    for (b = 0; b < i; b++) {
        if (operatives[b] > 0) {
            startingBalance += operatives[b];
            printf("%-15d|%10.2f|%10.2f|%10.2f\n", b + 1, operatives[b], 0.0, startingBalance);
        } else {
            startingBalance += operatives[b];
            printf("%-15d|%10.2f|%10.2f|%10.2f\n", b + 1, 0.0, operatives[b] * -1, startingBalance);
        }
    }
}