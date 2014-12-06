#include <stdio.h>
#include <string.h>
#include <ctype.h>

void swapName() {
    char name[32];
    long i = 0;
    printf("Please enter your name: ");
    scanf("%[a-zA-Z ]s", name);

    long size = strlen(name);
    printf("\nThe opposite of your name is: ");

    for (i = size - 1; i >= 0; i--) {
        if (i == size - 1 || name[i + 1] == ' ') {
            printf("%c", toupper(name[i]));
        } else
            printf("%c", tolower(name[i]));
    }

    // Clear the stdin buffer.
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}