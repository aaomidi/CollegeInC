#include <stdio.h>

void sort() {
    int i = 0;
    printf("Please enter your number.\n");
    int input = -1;
    int values[1024];
    scanf("%d", &input);
    while (input != -1) {
        values[i] = input;
        i++;
        printf("Please enter your next number, enter -1 to quit loop.\n");
        scanf("%d", &input);
    }
    int a;
    int b;
    for (a = i; a >= 0; a--) {
        for (b = 1; b <= i; b++) {
            if (values[b - 1] > values[b]) {
                int temp = values[b - 1];
                values[b - 1] = values[b];
                values[b] = temp;
            }
        }
    }
    for (a = i; a >= 0; a--) {
        printf("%d\n", values[a]);
    }
}