//Korisnik unosi 8 znamenkasti heksadecimalni broj i 8 znamenkasti oktalni.
//NNapisi program koji raèuna njihovu razliku i daje rezultat.


int hex_u_dek(char hex[]) {
	int i;
	int baza = 1;
	int dec = 0;

	for (i = strlen(hex); i >= 0; i--) {

		if (hex[i] >= '0' && hex[i] <= '9') {
			dec = dec + (int)(hex[i] - 48) * baza;
			baza = baza * 16;
		}

		else if (hex[i] >= 'A' && hex[i] <= 'F') {
			dec = dec + (int)(hex[i] - 55) * baza;
			baza = baza * 16;
		}

		else if (hex[i] >= 'A' && hex[i] <= 'F') {
			dec = dec + (int)(hex[i] - 87) * baza;
			baza = baza * 16;
		}
	}

	return dec;
}

int okt_u_dek(int okt) {
	int dec = 0;
	int ostatak;
	int baza = 1;

	while (okt != 0) {
		ostatak = okt % 10;
		dec = dec + ostatak * baza;
		baza = baza * 8;
		okt = okt / 10;
	}
	return dec;
}

int main() {
	char hex[10];
	int okt;

	printf("Unesite 8-znamenkasti hex broj: ");
	scanf("%s", hex);
	printf("\n");

	printf("Unesite 8-znamenkasti oktalni broj: ");
	scanf("%d", &okt);
	printf("\n");

	int dech, deco, razlika;

	dech = hex_u_dek(hex);
	deco = okt_u_dek(okt);

	razlika = dech - deco;

	printf("Razlika hex i okt broja je %d. ", razlika);

	return 0;
}