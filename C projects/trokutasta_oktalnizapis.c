//: Za neki dekadski broj N, ispisati (ukljucujuci N) u niz oktalnu vrijednost za svaki broj od 1 do N
//npr za 3:
//0
//0 1
//0 1 2
//0 1 3

#include<stdio.h>


void dec_u_oct(int broj) {
	int oct[16];
	int i=0;

	while (broj != 0) {
		oct[i] = broj % 8;
		broj /= 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d", oct[j]);
	}
}

int main() {
	int N;
	printf("Unesite neki dekadski broj:");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (j <= i) {
				dec_u_oct(j);
				printf(" ");
			}
			else
				printf(" ");
		}

		printf("\n");
	}


	return 0;
}