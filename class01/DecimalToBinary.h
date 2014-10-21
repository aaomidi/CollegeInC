#include <stdio.h>

void convertDecimalToBinary() {
    int number;
    
    printf("Please enter the number you want to convert.\n");
    scanf("%d", &number);
    
    long int result = 0;
    int i = 1;

    while (number > 0) {
        if(number % 2 == 1) {
            result += i;
        }
        number /= 2;
        i *= 10;
    }
    
    printf("%d", result);
}

