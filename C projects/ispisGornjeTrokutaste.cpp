#include <stdio.h>

int main() {
    int rows, cols, i, j;
    int matrix[10][10];

    // Unos dimenzija matrice
    printf("Unesite broj redaka");
    scanf("%d", &rows);
    printf("Unesite broj stupaca");
    scanf("%d", &cols);

    // Unos elemenata matrice
    printf("Unesite elemente matrice:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Ispis gornjeg trokuta matrice
    printf("Gornji trokut matrice:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (i <= j) {
                printf("%d ", matrix[i][j]);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
