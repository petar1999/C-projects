//unijeti troznamenkasti heksadekadski broj, unijeti dvoznamenkasti dekadski random broj, 
//ispisati njihovu razliku u binarnom obliku 


#include <string.h>
#include <stdio.h>

int hex_u_dec(char hex[]) {
	int dec;
	int i;
	int baza = 1;

	for (i = strlen(hex) - 1; i >= 0; i--) {
		if (hex[i] >= '0' && hex[i] <= '9') {
			dec = dec + (int)(hex[i] - 48) * baza;
			baza = baza * 16;
		}
		else if (hex[i] >= 'A' && hex[i] <= 'F') {
			dec = dec + (int)(hex[i] - 55) * baza;
			baza = baza * 16;
		}
		else if (hex[i] >= 'a' && hex[i] <= 'f') {
			dec = dec + (int)(hex[i] - 87) * baza;
			baza = baza * 16;
		}
	}

	return dec;
}

void dec_u_bin(int dec) {
	int bin[16];
	int i = 0, j;


	while (dec != 0) {
		bin[i] = dec % 2;
		dec = dec / 2;
		i++;
	}
	printf("Razlika zapisana u binarnom zapisu je: ");
	for (j = i - 1; j >= 0; j--) {
		printf("%d", bin[j]);
	}
}

int main() {
	int dec;
	char hex[3];
	int razlika_dec;

	printf("Unesi HEX broj: ");
	scanf("%s", hex);

	while (strlen(hex) != 3) {
		printf("Unesi PONOVNO TROZNAMENKASTI broj: ");
		scanf("%s", hex);
	}

	printf("Unesi DEC broj: ");
	scanf("%d", &dec);

	while (dec < 10 || dec>100) {
		printf("Ponovno unesi DVOZNAMENKASTI broj");
		scanf("%d", &dec);
	}

	int dech = hex_u_dec(hex);

	razlika_dec = dech - dec;
	printf("Razlika u decimalnom zapisu je %d: \n", razlika_dec);

	dec_u_bin(razlika_dec);

	return 0;
}