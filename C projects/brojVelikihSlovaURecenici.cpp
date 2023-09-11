#include<stdio.h>
#include<ctype.h>

// Broji koliko rijeèi poèinje velikim slovom i ispisuje te rijeèi

int main() {
	char sentence[1000];
	printf("Unesite reèenicu:");
	fgets(sentence, sizeof(sentence), stdin);// èitanje reèenice sa standardnog ulaza
	printf("\n");

	int num_uppercase = 0;

	printf("Rijeèi koje poèinju velikim slovom: ");
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (i == 0 || isspace(sentence[i - 1])) {
			if (isupper(sentence[i])) {
				putchar(sentence[i]);
				num_uppercase++;
				while (isalpha(sentence[i + 1])) { //ispisivanje ostatka rijeèi 
					i++;
					putchar(sentence[i]);
				}
				putchar(' ');
			}
		}
	}

	printf("\n Brooj velikih slova u reèenici: %d\n", num_uppercase);

	return 0;
}