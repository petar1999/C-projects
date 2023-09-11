#include<stdio.h>
#include<ctype.h>

// Broji koliko rije�i po�inje velikim slovom i ispisuje te rije�i

int main() {
	char sentence[1000];
	printf("Unesite re�enicu:");
	fgets(sentence, sizeof(sentence), stdin);// �itanje re�enice sa standardnog ulaza
	printf("\n");

	int num_uppercase = 0;

	printf("Rije�i koje po�inju velikim slovom: ");
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (i == 0 || isspace(sentence[i - 1])) {
			if (isupper(sentence[i])) {
				putchar(sentence[i]);
				num_uppercase++;
				while (isalpha(sentence[i + 1])) { //ispisivanje ostatka rije�i 
					i++;
					putchar(sentence[i]);
				}
				putchar(' ');
			}
		}
	}

	printf("\n Brooj velikih slova u re�enici: %d\n", num_uppercase);

	return 0;
}