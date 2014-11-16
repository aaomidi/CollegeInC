#include <stdio.h>
#include <ctype.h>

#define ACCEPTABLE_CHARACTERS 8

int checkEntry(char c);

void calculateGPA() {
    int result = 1;
    int temp = 1;
    /**
    * 0 score
    * 1 takenCredits
    * 2 passedCredits
    * 3 failedCredits
    * 4 droppedCredits
    * 5 preCollegeCredits
    * 6 incompleteCredits
    */
    int information[7] = {0};
    while (result == 1) {
        char grade;
        printf("Please enter your letter grade.\n");
        //Read user entry for grade.
        while (scanf("%c", &grade)) {
            setbuf(stdin, NULL);
            printf("Your entry was not recognized, please type in the letter grade again.\n");
        }
        grade = tolower(grade);
        result = checkEntry(grade);
        if (result) {
            int credits;
            printf("Please enter the number of credits.\n");
            while (!scanf("%d", &credits)) {
                setbuf(stdin, NULL);
                printf("Please enter an integer for credits.\n");
            }
            switch (grade) {
                case 'a':
                    break;
                case 'b':
                    break;
                case 'd':
                    break;
                case 'f':
                    break;
                case 'i':
                    break;
                case 'p':
                    break;
                case 'w':
                    break;
                default:
                    //Do nothing.
                    break;
            }
        } else if (!result) {
            printf("That grade letter was not recognized. Please enter it again.\n");
            result = 1;
        }
    }
}

int checkEntry(char c) {
    char acceptableChars[] = {'a', 'b', 'c', 'd', 'f', 'i', 'p', 'w'};
    if (c == 'e') {
        return 2;
    }
    int i;
    for (i = 0; i < ACCEPTABLE_CHARACTERS; i++) {
        if (acceptableChars[i] == c) {
            return 1;
        }
    }
    return 0;
}