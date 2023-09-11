#include <stdio.h>

//Zamijenite svaki element matrice s sumom dijagonalnih elemenata

int main() {
    int matrix[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int sum = 0;

    // Pronaðite sumu dijagonalnih elemenata.
    for (int i = 0; i < 3; i++) {
        sum += matrix[i][i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = sum;
        }
    }

    // Ispišite novu matricu.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>

//suma dijagonalnih elemenata i prosjek njihov

int main()
{
    int niz[3][3]={{11,12,13},{14,15,16},{17,18,19}};
   
   int i,j;
   int sum=0;
   int pros=0;
   
   for(i=0;i<3;i++){
       sum=sum+niz[i][i];    
   }
   
   pros=sum/3;
   printf("suma %d", sum);
   printf("prosjek %d", pros);
          
    return 0;
}
*/