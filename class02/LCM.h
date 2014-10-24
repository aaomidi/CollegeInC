#include <stdio.h>

int gcd(int m, int n);

void lcm() {
    // Initialize the m and n value.
    int m = 0;
    int n = 0;
    // UI
    printf("Please enter your first number.\n");
    // Assign the user input to the variable m.
    scanf("%d", &m);
    // UI
    printf("Please enter your second number.\n");
    // Assign the user input to the variable n.
    scanf("%d", &n);
    //Check if m and n are negative and make them positive.
    if (m < 0) {
        m *= -1;
    }
    if (n < 0) {
        n *= -1;
    }
    // Get the GCD of these two numbers.
    int result = gcd(m, n);
    // Print out the result.
    printf("The LCM of these two numbers are: %d", (m * n) / result);

}

int gcd(int m, int n) {
    // Check if numbers are zero.
    if (m == 0 || n == 0) {
        return 0;
    }
    // Initialize the result variable.
    int result = -1;
    // Loop the GCD operation.
    while (result != 0) {
        result = m % n;
        if (result != 0) {
            m = n;
            n = result;
        }
    }
    // Return the GCD.
    return n;
}