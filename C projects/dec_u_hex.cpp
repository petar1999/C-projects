// dec u hex

#include<stdio.h>

int main() {
	int dekadski;
	int ostatak;
	int i = 0;
	char hex[100];

	printf("Unesite dekadski broj:");
	scanf("%d", &dekadski);
	printf("\n");

	while (dekadski != 0) {
		ostatak = dekadski % 16;
		if (ostatak < 10) {
			hex[i] = ostatak + 48;
		}
		else
			hex[i] = ostatak + 55;
		dekadski /= 16;
		i++;
	}

	int j;
	printf("Heksadecimalni zapis je:");
	for (j = i - 1; j >= 0; j--) {
		printf("%c", hex[j]);
	}

	return 0;
}