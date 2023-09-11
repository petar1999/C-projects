#include <stdio.h>

int main() {
    int br;
    int i, j;

    scanf("%d", &br);

    for (i = 1; i <= br; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}



