#include <stdio.h>

void mirrorNumber() {
    int number;
    printf("Please enter the number you want to mirror.\n");

    if (!scanf("%d", &number)) {
        printf("Please re-run the program and enter a number.");
    }

    int i = 0;
    int values[1024];

    while (number != 0) {
        values[i++] = number % 10;
        number /= 10;
    }

    int _i = 0;

    while (_i != i) {
        if (values[_i] == 0) {
            _i++;
            continue;
        }
        printf("%d", values[_i++]);
    }
}