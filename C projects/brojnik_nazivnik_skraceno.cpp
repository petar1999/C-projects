#include<stdio.h>
#include<ctype.h>

int main() {
	char sentence[1000];
	printf("Unesite re�enicu:");
	fgets(sentence, sizeof(sentence), stdin);// �itanje re�enice sa standardnog ulaza
	printf("\n");

	int num_uppercase = 0;
	printf("Rije�i koje po�inju velikim slovom: ");
	for (int i = 0; sentence[i] != '0'; i++) {
		if (i == 0 || isspace(sentance[i - 1])) {
			if (isupper(sentance[i])) {
				putchar(sentance[i]);
				num_uppercase++;
				while (isalpha(sentance[i + 1])) {
					i++;
					putchar(sentance[i]);
				}
				putchar(' ');
			}
		}
	}

	printf("\n Brooj velikih slova u re�enici: %d\n", num_uppercase);

	return 0;
}