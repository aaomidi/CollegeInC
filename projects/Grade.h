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
    * 4 incompleteCredits
    * 5 preCollegeCredits
    * 6 droppedCredits
    */
    int information[7] = {0, 0, 0, 0, 0, 0, 0};
    while (result == 1) {
        char grade;
        printf("Please enter the letter grade.\n");
        //Read user entry for grade.
        while (!scanf("%s", &grade)) {
            printf("That grade letter was not recognized. Please enter it again.\n");
        }
        setbuf(stdin, NULL);
        grade = tolower(grade);
        result = checkEntry(grade);
        if (result == 1) {
            int credits;
            printf("Please enter the number of credits.\n");
            temp = scanf("%d", &credits);
            while (temp < 1) {
                setbuf(stdin, NULL);
                printf("Please enter an integer for credits.\n");
                temp = scanf("%d", &credits);
            }
            setbuf(stdin, NULL);
            switch (grade) {
                case 'a':
                    // An 'A' is considered 4 points.
                    information[0] += credits * 4;
                    information[1] += credits;
                    information[2] += credits;
                    break;
                case 'b':
                    // A 'B' is considered 3 points.
                    information[0] += credits * 3;
                    information[1] += credits;
                    information[2] += credits;
                    break;
                case 'c':
                    // A 'C' is considered 3 points.
                    information[0] += credits * 2;
                    information[1] += credits;
                    information[2] += credits;
                    break;
                case 'd':
                    // A 'D' is considered 3 points.
                    information[0] += credits * 1;
                    information[1] += credits;
                    information[2] += credits;
                    break;
                case 'f':
                    information[1] += credits;
                    information[3] += credits;
                    break;
                case 'i':
                    information[1] += credits;
                    information[4] += credits;
                    break;
                case 'p':
                    information[1] += credits;
                    information[5] += credits;
                    break;
                case 'w':
                    information[1] += credits;
                    information[6] += credits;
                    break;
                default:
                    //Do nothing.
                    break;
            }
        } else if (result == 0) {
            printf("That grade letter was not recognized. Please enter it again.\n");
            result = 1;
        } else if (result == 2) {
            printf("Thank you for entering the grades.\n");
            int i;
            for (i = 0; i < 70; i++) {
                printf("-");
            }
            // GPA = Net score divided by passed+failed Credits
            float gpa = ((float) information[0] / (float) (information[2] + information[3]));
            printf("\nThe student took %d credits. From the %d credits, they passed %d of them where %d of them were pre-college credits."
                            " Also they failed %d of their taken credits.\n"
                            "Furthermore they had %d incomplete and %d dropped credits.\n"
                            "Their GPA is %.2f",
                    information[1], information[1], information[2] + information[5], information[5],
                    information[3],
                    information[4], information[6],
                    gpa);
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