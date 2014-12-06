#include <stdio.h>
#include <ctype.h>

void extra() {
    char ch1, ch2, string[1024], temp;
    int i = 0, count = 0;
    printf("Please enter a character.\n");
    scanf("%c", &ch1);
    printf("Please enter a string.\n");
    scanf("%s", string);
    for (i = 0; i < strlen(string); i++) {
        if (string[i] == ch1) {
            count++;
        }
    }
    printf("The count of %c is %d.", ch1, count);
}