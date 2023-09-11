#include<stdio.h>

int gcd(int brojnik, int nazivnik) {
	if (nazivnik == 0)
		return brojnik;
	else {
		return gcd(nazivnik, brojnik % nazivnik);
	}
}

int main() {
	int a, b, c, d;
	int brojnik, nazivnik;
	int zajednicki;
	int brojnik_skraceni, nazivnik_skraceni;

	printf("Unesite brojnik i nazivnik 1. razlomka: ");
	scanf("%d %d", &a, &b);
	printf("\n");
	printf("Unesite brojnik i nazivnik 2. razlomka: ");
	scanf("%d %d", &c, &d);
	printf("\n");

	printf("Unijeti razlomci su: %d/%d i %d/%d. ", a, b, c, d);
	printf("\n");

	brojnik = a * d + b * c;
	nazivnik = b * d;

	printf("Zbroj neskraæenih razlomaka je: %d/%d.", brojnik, nazivnik);
	printf("\n");

	zajednicki = gcd(brojnik, nazivnik);

	brojnik_skraceni = brojnik / zajednicki;
	nazivnik_skraceni = nazivnik / zajednicki;

	printf("Skraceni zbroj zapisan u razlomku je: %d/%d.", brojnik_skraceni, nazivnik_skraceni);

	return 0;
}