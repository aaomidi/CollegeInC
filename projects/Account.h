#include <stdio.h>

void bank() {
    // Set the starting balance to 0.
    float balance = 0;
    // Set the status of the query to false.
    int status = 0;
    while (!status) {
        // UI
        printf("Welcome to the Iron Bank of Braavos\n");
        // UI
        printf("Please enter the account balance.\n");
        status = scanf("%f", &balance);
        // Flush the buffer for stdin. After we press the enter for the first time we still have the \n somewhere in the buffer.
        setbuf(stdin, NULL);
        if (!status || balance < 0) {
            // UI
            printf("You need to enter a number for the account balance and it can not be negative.");
            continue;
        }
    }
    // Create a counter and set it to 0
    int i = 0;
    // Save the starting balance.
    float startingBalance = balance;
    // Create an array with all the actions taken in the program.
    float operatives[1024];
    // UI
    printf("Please enter an operation you want to do with the account's balance.\nRemember the account balance can not be negative.\n");
    // Create the operation float and set it to 0.
    float operation = 0;
    // Read the user input and set operation to that input.
    scanf("%f", &operation);
    while (operation != 0) {
        setbuf(stdin, NULL);
        if (operation > 0) {
            balance += operation;
            // UI
            printf("Your new balance is %.2f after adding %.2f to your balance.\n", balance, operation);
            operatives[i] = operation;
            i++;
        } else {
            if (balance + operation < 0) {
                // UI
                printf("The account's balance can not be negative.\n");
                setbuf(stdin, NULL);
            } else {
                balance += operation;
                operatives[i] = operation;
                // UI
                printf("Your new balance is %.2f after removing %.2f from your balance.\n", balance, operation * -1);
                i++;
            }
        }
        // UI
        printf("Please enter a new operation to preform on your account's balance.\n");
        scanf("%f", &operation);
    }
    // UI
    for (operation = 0; operation < 100; operation++) {
        printf("=");
    }
    // UI
    printf("\nStarting Balance: %9.2f\n", startingBalance);
    printf("Latest Balance: %9.2f\n", balance);
    for (operation = 0; operation < 100; operation++) {
        printf("-");
    }
    // UI
    printf("\n%-15s|%-10s|%-10s|%-10s\n", "Operation", "Deposit", "Withdrawl", "Balance");
    for (operation = 0; operation < 100; operation++) {
        printf("-");
    }
    printf("\n");
    int b;
    // Where should this transaction be printed.
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
