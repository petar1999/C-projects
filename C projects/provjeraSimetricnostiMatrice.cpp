#include <stdio.h>

int main() {
    int i, j;
    int matrix[100][100] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    int simetricna = 1;

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                simetricna = 0;
                break;
            }

        }
   }

    if (simetricna) {
        printf("simetricna je.");
    }
    else
        printf("nije simetricna.");

    return 0;
}
