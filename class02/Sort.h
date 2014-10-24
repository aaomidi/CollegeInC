#include <stdio.h>

void sort() {
    int i = 0;
    printf("Please enter your number.\n");
    int input = -1;
    // Initialize the values variable.
    int values[1024];
    scanf("%d", &input);
    // Read input and assign it to the input variable.
    while (input != -1) {
        values[i] = input;
        i++;
        printf("Please enter your next number, enter -1 to quit loop.\n");
        scanf("%d", &input);
    }
    int a;
    int b;
    // Check each variable in the array with the variable right by it.
    for (a = i; a >= 0; a--) {
        for (b = 1; b <= i; b++) {
            if (values[b - 1] > values[b]) {
                int temp = values[b - 1];
                values[b - 1] = values[b];
                values[b] = temp;
            }
        }
    }
    // Print them out.
    for (a = i; a >= 0; a--) {
        printf("%d\n", values[a]);
    }
}