#include <stdio.h>



int main() {
    //Korisnik unosi dimenzije matrice
    int row, col;
    printf("Unesite broj redaka matrice: ");
    scanf("%d", &row);
    printf("\n");

    printf("Unesite broj stupaca matrice: ");
    scanf("%d", &col);
    printf("\n");


    //Korisnik unosi elemente matrice

    int matrix[100][100];

    printf("Unesite elemente matrice: ");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // ISPIS DONJE TROKUTA MATRICE

    printf("Donji trokut matrice je: \n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}