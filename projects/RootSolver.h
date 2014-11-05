#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void solveForRoots() {
    // ax^2+bx+c=0;
    // Initialize the variables to be used with the system.
    float a = 0, b = 0, c = 0, r1 = 0, r2 = 0, delta = 0;
    // UI
    printf("Enter coefficients a, b and c.\nSeperate them with spaces.\n");
    // Read the coefficients of the quadratic formula.
    scanf("%f %f %f", &a, &b, &c);
    // Calculate the determinant of the quadratic formula.
    delta = ((b * b) - (4 * a * c));
    // Three conditions for the determinant.
    if (delta > 0) {
        r1 = ((-b + sqrt(delta)) / (2 * a));
        r2 = ((-b - sqrt(delta)) / (2 * a));
    } else if (delta == 0) {
        r1 = r2 = -b / (2 * a);
    } else {
        r1 = -b / (2 * a);
        r2 = sqrt(-delta) / (2 * a);
        // Print the specific message for imaginary numbers.
        printf("Roots are: %.2f+%.2fi and %.2f-%.2fi.\n", r1, r2, r1, r2);
        return;
    }
    // Print the specific message for normal numbers.
    printf("Roots are: %.2f and %.2f.\n", r1, r2);
}

