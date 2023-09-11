// dec u oct

#include<stdio.h>

int main() {
	int dekadski;
	int ostatak;
	int i = 0;
	int oct[16];

	printf("Unesite dekadski broj:");
	scanf("%d", &dekadski);
	printf("\n");

	while (dekadski != 0) {
		ostatak = dekadski % 8;
		oct[i] = ostatak;
		dekadski /= 8;
		i++;
	}

	int j;
	printf("Oktalni zapis je:");
	for (j = i - 1; j >= 0; j--) {
		printf("%d", oct[j]);
	}

	return 0;
}