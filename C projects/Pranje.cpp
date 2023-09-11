#include <stdio.h>

int main() {

	int m;

	printf("Unesite novac (10, 20 ili 50 kn): ");
	scanf("%d", &m);

	int p, o;
	printf("Izaberite program:\n Pranje (1), Ispiranje (2), Povrat novca(3) ");
	scanf("%d", &p);

	switch (p)
	{
	case 1:
		o = m - 6;
		printf("Ostatak novca je %d\n", o);
		if (o > 6) {
			printf("Želite li još vremena");
		}
		break;

	case 2:
		o = m - 9;
		printf("Ostatak novca je %d\n", o);
		if (o > 9) {
			printf("Želite li još vremena");
		}
		break;

	case 3:

		printf("Povrat novca: %d", m);
		break;

	default:
		printf("Niste odabrali funkciju");
	}

	return 0;
}