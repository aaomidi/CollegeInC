#include <stdio.h>

void convertDecimalToBinary() {
    int number;
    
    printf("Please enter the number you want to convert.\n");
    scanf("%d", &number);
    
    long int result = 0;
    int i = 0;

    while (number != 0) {
        if(number % 2 == 1) {
            result += myPow(10, i);
        }
        number /= 2;
        i++;
    }
    
    printf("%d", result);
}

int myPow(int a1, int a2) {
    int result = 1;
        
    while(a2 != 0) {
        result *= a1;
        a2--;
    }
    
    return result;
}

