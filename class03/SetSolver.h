#include <stdio.h>

void solveSet() {
    // S = 1 - 2 + 3 + ... +- n
    int n;
    printf("Please enter an input number.\n");
    if (!scanf("%d", &n)) {
        printf("Your input is incorrect and must be a number.\n");
        return;
    }
    int i = 1, sum = 0;
    while (i <= n) {
        if (i % 2 != 0) {
            sum += i;
        } else {
            sum -= i;
        }
        i++;
    }
    printf("The sum of your equation is %d.\n", sum);
}