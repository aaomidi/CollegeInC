#include <stdio.h>

void printPascal(int, int);

void khayyam() {
    int a, b, values[1024] = {1};
    printf("Please enter the location of the triangle you want to get.\n");
    scanf("%d %d", &a, &b);
    printPascal(a, b);
}

void printPascal(int a, int b) {
    int line, i;
    for (line = 1; line <= a; line++) {
        int C = 1;  // used to represent C(line, i)
        for (i = 1; i <= line; i++) {
            if (line == a && i == b) {
                printf("%d ", C);  // The first value in a line is always 1
            }
            C = C * (line - i) / i;
        }
        printf("\n");
    }
}