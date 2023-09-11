//Dobiješ niz od n brojeva,tribas ispisat sve koji su duplo veæi od prethodnog i za 12 manji od sljedeæeg.


#include<stdio.h>

int main() {
	int niz[] = { 1,2,14,20,40,52,100 };
	int i;

	for (i = 0; i < 6; i++) {
		if (niz[i] == 2 * niz[i - 1] && niz[i] == niz[i + 1] - 12) {
			printf("%d", niz[i]);
		}
	}

	return 0;
}