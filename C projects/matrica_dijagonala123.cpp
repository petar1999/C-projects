#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int n;
    scanf("%d", &n);
    int matrix[100][100];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i)
                matrix[i][j] = i;
            else
                matrix[i][j] = 0;
        }
    }


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    return (0);
}
