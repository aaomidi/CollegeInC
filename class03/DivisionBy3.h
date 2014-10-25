#include <stdio.h>

void divisionBy3() {
    int i = -1, n = 1, ans[1024];
    while (n > 0) {
        printf("Please enter a positive integer.\n");
        scanf("%d", &n);
        if (n > 0 && n % 3 == 0) {
            ans[++i] = n;
        }
    }
    while (i >= 0) {
        printf("%d\n", ans[i--]);
    }
}