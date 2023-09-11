#include<stdio.h>

int main() {
	char dec[100];
	int i, dotIndex;
	int j, k;
	int intSuma = 0, fracSuma = 0;

	//ogranièiti na 5 decmalnih mjesta

	while (1) {
		printf("Unesite decimalni broj:");
		scanf("%s", dec);

		i = 0;
		while (dec[i] != '\0') {
			if (dec[i] == '.') {
				dotIndex = i;
			}
			i++;
		}

		if (i - dotIndex <= 6) {
			break;
		}
		printf("Broj ne smije imati više od 5 decimalnih mjesta. \n");
	}

	printf("Unijeli ste broj: %s \n", dec);

	printf("Cjelobrojni dio:");
	for (j = 0; j < dotIndex; j++) {
		printf("%c", dec[j]);
		intSuma = intSuma + dec[j] - '0'; // pretvaranje chara u dekadski broj 
	}
	printf("\n");

	printf("Decimalni dio:");
	for (k = dotIndex + 1; k < i; k++) {
		printf("%c", dec[k]);
		fracSuma = fracSuma + dec[k] - '0';
	}
	printf("\n");

	int umnozak = intSuma * fracSuma;
	printf("Umnozak sume cjelobrojnog i sume decimalnog dijela broja je %d", umnozak);

	return 0;
}