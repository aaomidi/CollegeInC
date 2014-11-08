#include <w32api/windows.storage.h>
#include "projects/RootSolver.h"
#include "projects/TimeSolution.h"

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
    // solveForRoots();
    timeSolution();
    // Don't close the console until the user has typed a letter.
    int operation;
    printf("\n");
    for (operation = 0; operation < 70; operation++) {
        printf("-");
    }
    printf("\nPlease enter q to quit the program or r to rerun the program.\n");
    setbuf(stdin, NULL);
    char action;
    action = getchar();
    if (action == 'r') {
        for (operation = 0; operation < 70; operation++) {
            printf("-");
        }
        printf("\n");
        setbuf(stdin, NULL);
        main();
    }
    return 0;
}