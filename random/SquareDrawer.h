#include <stdio.h>

void drawSquare() {
    printf("Please enter the size of the square you want drawn.\n");
    int a, b, size = 0;
    scanf("%d", &size);
    /*
    for (a = 1; a <= size; a++) {
        for (b = 1; b <= size; b++) {
            printf("*");
        }
        printf("\n");
    }
    */
    a = 1;
    b = 1;
    LOOP:
    if (a <= size) {
        printf("*");
        a++;
        if (a > size && b < size) {
            printf("\n");
            a = 1;
            b++;
        }
        goto LOOP;
    }


}