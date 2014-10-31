#include <stdio.h>

void averageChecker() {
    int i = 0;
    int values[100];
    float avg = 0;
    while (i < 3) {
        printf("Please enter the %d number.\n", i + 1);
        int input;
        scanf("%d", &input);
        values[i] = input;
        avg = (avg + input);
        i++;
    }
    avg = avg / i;
    i = 0;
    int num[3];
    // Larger numbers.
    num[0] = 0;
    // Smaller numbers.
    num[1] = 0;
    // Equal numbers.
    num[2] = 0;
    while (i < 3) {
        int temp = values[i];
        if (temp > avg) {
            num[0]++;
        } else if (temp < avg) {
            num[1]++;
        } else {
            num[2]++;
        }
        i++;
    }
    printf("The average of your entries are %f. Where %d of the entries are larger than your average. And %d of them are smaller. And %d are the same.", avg, num[0], num[1], num[2]);
}