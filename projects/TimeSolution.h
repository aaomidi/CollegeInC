#include <stdio.h>

void timeSolution() {
    // Initialize the variables.
    int year = 0, month = 0, day = 0;
    int input;
    // UI
    printf("Please enter the number of days you want to calculate.\n");
    // Read user input.
    scanf("%d", &input);
    // Preserve the initial input.
    int oldInput = input;
    // Calculate the number of years.
    while (input >= 365) {
        year++;
        input -= 365;
    }
    // Calculate the number of months.
    if (input >= 31) {
        if (input <= 186) {
            month += (input / 31);
            input %= 31;
        } else {
            month = ((input - 186) / 30) + 6;
            input = (input - 186) % 30;
        }
    }
    // Anything remaining will be the number of days.
    if (input >= 0) {
        day = input;
    }
    // UI
    printf("Your input of %d days is %d years, %d months and %d days.", oldInput, year, month, day);
}