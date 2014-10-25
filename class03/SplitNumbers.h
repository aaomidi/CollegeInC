#include <stdio.h>

void splitNumbers() {
    printf("Please enter a two digit integer.\n");
    int input;
    scanf("%d", &input);
    if (input - 100 >= 0 || input - 10 < 0) {
        printf("Error, only two digit numbers are accepted.");
        return;
    }
    int a = input % 10;
    int b = (input - b) / 10;
    if (b > a) {
        for (b; b >= a; b--) {
            printf("%d", b);
        }
    } else {
        for (b; b <= a; b++) {
            printf("%d", b);

        }
    }
}