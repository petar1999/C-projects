#include <stdio.h>

int main() {
    int matrix[3][3] = { {5, 2, 7}, {8, 1, 3}, {6, 9, 4} };
    int i, j, temp;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 1) {
                for (int k = 0; k < 3 - 1; k++) {
                    for (int l = k + 1; l < 3; l++) {
                        if (matrix[k][j] > matrix[l][j]) {
                            temp = matrix[k][j];
                            matrix[k][j] = matrix[l][j];
                            matrix[l][j] = temp;
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j == 0 || j == 2) {
                for (int k = 0; k < 3 - 1; k++) {
                    for (int l = k + 1; l < 3; l++) {
                        if (matrix[k][j] < matrix[l][j]) {
                            temp = matrix[k][j];
                            matrix[k][j] = matrix[l][j];
                            matrix[l][j] = temp;
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
