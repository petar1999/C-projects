#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    int z = 0;
    do {
        int uneseniListic[7];

        for (int i = 0; i < 7; i++) {
            scanf("%d", &uneseniListic[i]);
        }

        int izvuceniListic[7];
        srand(time(0));

        for (int i = 0; i < 7; i++) {
            izvuceniListic[i] = rand() % 49 + 1;

            if (i > 0) {
                if (izvuceniListic[i] == izvuceniListic[i - 1]) {
                    izvuceniListic[i] = rand() % 49 + 1;
                }
            }

        }

        for (int i = 0; i < 7; i++) {
            printf("%d ", izvuceniListic[i]);
        }

        int brPog = 0;

        for (int i = 0; i < 7; i++) {
            for (int j = 0; j < 7; j++) {
                if (uneseniListic[i] == izvuceniListic[j]) {
                    brPog++;
                }

            }
        }
        printf("Pogodili ste %d brojeva lota", brPog);

        if (brPog >= 4)
            printf("ÈESTITAMO OSVOJILI STE LOTTO!!");
        else
            z++;
    } while (z < 50);

    if (z == 50)
        printf("Zao nam je IGRA je gotova.");
  

    return 0;
}