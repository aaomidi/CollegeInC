#include <stdio.h>

float myAverage(int[], int, int);

void readNumbers() {

    int buffer = 1024;
    int i = 0;

    printf("Please enter how many numbers you want to read.\n");
    if (!scanf("%d", &buffer)) {
        printf("Please re-run the program and enter a number instead.");
        return;
    }

    int values[buffer];

    while (i < buffer) {
        printf("Please enter your %d number.\n", i + 1);
        if (!scanf("%d", &values[i++]));
    }

    float average = myAverage(values, i, buffer);

    printf("%.3f", average);
}

float myAverage(int values[], int i, int buffer) {
    int result = 0;
    while (--i != -1) {
        result += values[i];
    }
    return (float) result / (float) buffer;
}