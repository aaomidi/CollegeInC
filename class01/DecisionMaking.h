#include <stdio.h>

void makeDecision() {
    int values[1024];
    int i = -1;
    int hasInput = 1;
    int input;

    while (hasInput) {
        if (i < 2) {
            printf("Please enter a number to add to the calculation stream.\n");
        } else {
            printf("Please enter a number to add to the calculation stream.\nYou may leave it empty if you want to start the calculation.\n");
        }

        if (!scanf("%d", &input)) {
            hasInput = 0;
            break;
        }

        values[++i] = input;
        printf("%d\n", i);
    }

    if (i < 2) {
        printf("You need to have at least 3 entries.");
    }

    if (values[i] == 0) {
        printf("%d\n", sum(values, i));
    } else if (values[i] < 0) {
        printf("%d\n", subtract(values, i));
    } else {
        printf("%d\n", multiply(values, i));
    }

}

int sum(int values[], int i) {
    int result = values[0];
    i--;

    while (i != 0) {
        result += values[i--];
    }

    return result;
}

int multiply(int values[], int i) {
    int result = values[0];
    i--;

    while (i != 0) {
        result -= values[i--];
    }

    return result;
}

int subtract(int values[], int i) {
    int result = values[0];
    i--;

    while (i != 0) {
        result *= values[i--];
    }

    return result;
}
