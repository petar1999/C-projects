#include <conio.h>
#include <stdio.h>
int main() {
	unsigned int G;
	printf("Unesite godinu: ");
	scanf_s("%d", &G);
	if (G % 400 == 0)
		printf("Godina %d je prijestupna.", G);
	else if (G % 4 == 0 && G % 100 != 0)
		printf("Godina %d je prijestupna.", G);
	else
		printf("Godina %d nije prijestupna.", G);
		return 0;}/*#include <stdio.h>

int main() {
	int godina;
	printf("Unesite godinu: ");
	scanf("%d", &godina);

	while (godina < 0) {
		printf("Godina mora biti pozitivan broj. Ponovno unesite godinu: ");
		scanf("%d", &godina);
	}

	if ((godina % 4 == 0 && godina % 100 != 0) || godina % 400 == 0) {
		printf("%d. godina je prijestupna.\n", godina);
	} else {
		printf("%d. godina nije prijestupna.\n", godina);
	}

	return 0;
}
*/