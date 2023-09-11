// DEKADSKI U BINARNI
#include<stdio.h>

int main() {
	int dek;
	char bin[16];
	int i, j;


	printf("Unesite dekadski broj:");
	scanf("%d", &dek);
	printf("\n");

	while (dek != 0) {
		bin[i] = dek % 2;
		dek = dek / 2;
		i++;
	}

	printf("Binarni broj je:");
	for (j = i - 1; j >= 0; j--) {
		printf("%d", bin[j]);
	}
	return 0;
}