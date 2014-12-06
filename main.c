#include <stdio.h>
#include "projects/FindCharacter.h"

int main() {
    /* Simple Algorithms */
    // convertDecimalToBinary();
    // makeDecision();
    // readNumbers();
    // mirrorNumber();
    // lcm();
    // sort();
    // calculateE();
    // divisionBy3();
    // solveSet();
    // splitNumbers();
    /* Exams */
    // averageChecker();
    /* Projects */
    // bank();
    findCharacter();
    // calculateGPA();
    // khayyam();
    // solveForRoots();
    // swapName();
    // tax();
    // timeSolution();
    /* Randoms */
    // extra();
    // drawSquare();
    // Don't close the console until the user has typed a letter.
    int operation;
    printf("\n");
    for (operation = 0; operation < 70; operation++) {
        printf("-");
    }
    printf("\nPlease enter 'q' to quit the program or 'r' to re-run the program.\n");

    // Clear the stdin buffer.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
    // End Clear

    char action;
    action = getchar();
    if (action == 'r') {
        for (operation = 0; operation < 70; operation++) {
            printf("-");
        }
        printf("\n");
        // Clear the stdin buffer.
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF);
        // End clear
    }
    return 0;
}