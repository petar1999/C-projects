#include <stdio.h>
#include <string.h>

int iz_hex_u_dec(char x[]) {

	int length = strlen(x);
	int dec = 0;
	int baza = 1;

	for (int i = length - 1; i >= 0; i--) {
		if (x[i] >= '0' && x[i] >= '9') {
			dec = (int(x[i] - 48) * baza);
			baza = baza * 16;
		}
		else if (x[i] >= '0' && x[i] >= '9') {
			dec = (int(x[i] - 55) * baza);
			baza = baza * 16;
		}
	}
}

int main() {

	char prvi[20], char drugi[20];
	int prvi_d, drugi_d;
	int razlika;

	printf("Unesite 1. heksadecimalni broj: ");
	scanf("%s", prvi);

	prvi_d = iz_hex_u_dec(prvi);
	printf("1. hex broj u dekaskom prikazu je %d", prvi_d);

	printf("Unesite 2. heksadecimalni broj: ");
	scanf("%s", drugi);

	drugi_d = iz_hex_u_dec(drugi);
	printf("2. hex broj u dekaskom prikazu je %d", drugi_d);

	razlika = prvi_d - drugi_d;
	printf("Razlika u dekadskom prikazu je: %d", razlika);

	int b[100];
	int i, j;
	
	while (razlika != 0) {
		b[i] = razlika % 2;
		razlika = razlika / 2;
		i++;
	}

	for (j < i - 1; j >= 0; j--) {
		printf("Razlika u binarnom obliku je %d", b[j]);
	}

	return 0;
}