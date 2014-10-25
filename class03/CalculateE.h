#include <stdio.h>

float factorial(int a);

void calculateE() {
    printf("Please enter a number.\n");
    int n = 0, i = 1;
    float sum = 0;
    scanf("%d", &n);
    while (i <= n) {
        sum += (1 / factorial(i));
        i++;
    }
    printf("%f", sum);
}

float factorial(int a) {
    float result = a--;
    while (a > 1) {
        result *= a;
        a--;
    }
    return result;
}