
//Matrica nxn, brojevi u matrici se random generiraju. Program racuna koji stupac i koji redak imaju najvecu srednju vrijednost elemenata.  

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int matrix[3][3] = { {3,1,2},{1,4,3},{5,2,1} };
    int temp;
    int i, j;
    int sumr[3] = { 0 };
    int sums[3] = { 0 };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sumr[i] = sumr[i] + matrix[i][j];
            sums[j] = sums[j] + matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", sums[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%d ", sumr[i]);
    }

    printf("\n");

    int maxr = sumr[0];
    int maxredak = 0;
    int maxs = sums[0];
    int maxstupac = 0;

    for (i = 0; i < 3; i++) {
        if (sumr[i] > maxr) {
            maxr = sumr[i];
            maxredak = i;
        }
    }
    for (i = 0; i < 3; i++) {
        if (sums[i] > maxs) {
            maxs = sums[i];
            maxstupac = i;
        }
    }

    printf("%d je u retku %d. ", maxr, maxredak);
    printf("%d je u stupcu %d", maxs, maxstupac);

    return 0;
}
