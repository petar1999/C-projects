//Imaš heksadecimalni broj, izracunaj ostatak cjelobrojnog djeljenja s 3, 
//i rezultat ispiši opet u heskadecimalnom obliku. 


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

void dec_u_hex(int dec) {
	char hex[16];
	int i = 0, ostatak;

	while (dec != 0) {
		ostatak = dec % 16;
		dec = dec / 16;

		if (ostatak < 10) {
			hex[i] = ostatak + 48;
			i++;
		}

		else {
			hex[i] = ostatak + 55;
			i++;
		}
	}

	printf("Razlika zapisana u hex formatu je: ");
	for (int j = i - 1; j >= 0; j--) {
		printf("%c", hex[j]);
	}
}

int main() {
	char hex[16];
	int dec;
	int rezultat;

	printf("Unesite hex broj: ");
	scanf("%s", hex);
	printf("\n");

	dec = hex_u_dec(hex);

	rezultat = dec % 3;

	dec_u_hex(rezultat);

	return 0;
}