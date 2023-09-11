#include<stdio.h>
#include<ctype.h>

int main() {
	char sentence[1000];
	printf("Unesite reèenicu:");
	fgets(sentence, sizeof(sentence), stdin);// èitanje reèenice sa standardnog ulaza
	printf("\n");

	int num_uppercase = 0;
	printf("Rijeèi koje poèinju velikim slovom: ");
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

	printf("\n Brooj velikih slova u reèenici: %d\n", num_uppercase);

	return 0;
}