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
        if (input <= 180) {
            month += (input / 30);
            input %= 30;
        } else {
            month = ((input - 180) / 31) + 6;
            input = (input - 180) % 31;
        }
    }
    day = input;
    printf("Your input of %d is %d years, %d months and %d days.", oldInput, year, month, day);
}