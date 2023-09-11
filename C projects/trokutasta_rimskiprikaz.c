/*Korisnik unosi neki broj N, npr 5 i ispisuje se
1
1 2
1 2 3
1 2 3 4 5
Ali svaki broj rimskim zapisom predstavit*/


#include <stdlib.h>
#include <stdio.h>

void rimski(int num) {
	int i, j;
	int niz[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	char* rim[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };

	for (i = 0; i < 13; i++) {
		while (num >= niz[i]) {
			printf("%s", rim[i]);
			num = num - niz[i];
		}
	}
}

int main() {

	int br;
	scanf("%d", &br);

	for (int i = 1; i <= br; i++) {
		for (int j = 1; j <= br; j++) {
			if (j <= i) {
				rimski(j);
				printf(" ");
			}
			else
				printf(" ");
		}

		printf("\n");
	}

	return 0;
}