#include <stdio.h>

void timeSolution() {
    int year = 0, month = 0, day = 0;
    int input;
    printf("Please enter the number of days you want to calculate.\n");
    scanf("%d", &input);
    int oldInput = input;
    while (input >= 365) {
        year++;
        input -= 365;
    }
    if (input >= 30) {
        if (input <= 186) {
            month += (input / 31);
            input %= 31;
        } else {
            month = ((input - 186) / 30) + 6;
            input = (input - 186) % 30;
        }
    }
    day = input;
    printf("Your input of %d days is %d years, %d months and %d days.", oldInput, year, month, day);
}