#include <stdio.h>

void lcm() {
    int m = 0;
    int n = 0;
    printf("Please enter your first number.\n");
    scanf("%d", &m);
    printf("Please enter your second number.\n");
    scanf("%d", &n);
    if (m < 0) {
        m *= -1;
    }
    if (n < 0) {
        n *= -1;
    }
    int result = gcd(m, n);
    printf("The LCM of these two numbers are: %d", (m * n) / result);

}

int gcd(int m, int n) {
    if (m == 0 || n == 0) {
        return 0;
    }
    int result = -1;
    while (result != 0) {
        result = m % n;
        if (result != 0) {
            m = n;
            n = result;
        }
    }
    return n;
}