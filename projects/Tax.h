// Tax calculation.
#include <stdio.h>

#define lowerBound 10000000
#define higherBound 70000000

void tax() {
    double a, b = 0;
    printf("Please enter your monthly salary in IRR.\n");
    scanf("%lf", &a);
    if (a <= lowerBound) {
        b = 0;
    } else if (a <= higherBound) {
        b = a * 0.1;
    } else {
        b = a * 0.2;
    }
    printf("Your yearly net income tax is: %.2lf Rials or %.2lf Tomans.\n", b, b / 10);
}