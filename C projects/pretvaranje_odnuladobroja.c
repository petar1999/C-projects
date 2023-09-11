#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Korisnik unosi neki binarni broj. Potrebno je ispisat sve brojeve od 0 do do tog
//broja u hex, oct, bin i dec formatu. 

void dec_bin(int br) {
	int bin[16];
	int i = 0;

	if (br == 0) {
		printf("\n");
		printf("%d", i);
	}

	while (br != 0) {
		bin[i] = br % 2;
		br = br / 2;
		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d", bin[j]);
	}
}

void dec_u_okt(int dec) {
	int okt[100];
	int i = 0;

	if (dec == 0) {
		printf("\n");
		printf("%d", i);
	}

	while (dec != 0) {
		okt[i] = dec % 8;
		dec = dec / 8;
		i++;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%d", okt[j]);
	}
}

void dec_hex(int decimalni) {
	int ostatak;
	int i = 0;
	char heksadecimalni[16];

	if (decimalni == 0) {
		printf("\n");
		printf("%d", i);
	}

	while (decimalni != 0) {
		ostatak = decimalni % 16;
		if (ostatak < 10) {
			heksadecimalni[i] = ostatak + 48;
		}
		else {
			heksadecimalni[i] = ostatak + 55;
		}
		i++;
		decimalni /= 16;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%c", heksadecimalni[j]);
	}
}

int main() {
	int bin;
	int dec = 0;
	int ost;
	int baza = 1;
	printf("Unesite binarni broj:");
	scanf("%d", &bin);

	while (bin != 0) {
		ost = bin % 10;
		bin = bin / 10;
		dec = dec + ost * baza;
		baza = baza * 2;
	}
	for (int p = 0; p <= dec; p++) {
		printf("%d", p);
		printf("\n");
	}

	for (int i = 0; i <= dec; i++) {
		dec_bin(i);
		printf("\n");
	}

	for (int k = 0; k <= dec; k++) {
		dec_u_okt(k);
		printf("\n");
	}

	for (int m = 0; m <= dec; m++) {
		dec_hex(m);
		printf("\n");
	}
	return 0;
}