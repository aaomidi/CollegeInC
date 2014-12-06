#include <stdio.h>

void extra() {
    char name[100][32];
    float score[100], temp = 0, sum = 0;
    int i = 0, count = 0, result = 1;

    do {
        printf("Lotfan name daneshju ra benevisid.\n");
        // Khundane name daneshju ta EoF.
        result = scanf("%s", name[i]);
        if (result != 0) {
            do {
                printf("Lotfan nomreye daneshju va vared konid.\n");
                // Khundane nomreye daneshju ta zamani ke nomre -1 nashode.
                scanf("%f", &temp);
                if (temp >= 0) {
                    sum += temp;
                    count++;
                }
            } while (temp >= 0);
            // Zakhire kardane miyangine nomre.
            score[i] = sum / count;
            i++;
        }
    } while (result == 1);
    int j;
    sum = 0;
    // Peyda kardane miyangine kelas
    for (j = 0; j <= i; j++) {
        sum += score[j];
    }
    printf("Miyange kelas barabare %f mibashad.", sum / i);
}