
//a
//a b
//a b c
//a b c d  ako unese d

#include<stdio.h>
#include<string.h>

int main() {
	char unos[];
	printf("Unesite slovo:");
	scanf("%s", unos);
	char slovo[] = "abcdefghijklmnoprstuvz";
	int n;
	for (int i = 0; i < strlen(slovo); i++) {
		if (slovo[i] == unos[0]) {
			n = i;
		}
	}

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++) {
			if (j <= i) {
				printf("%c", slovo[j]);
				printf(" ");
			}
			else
				printf(" ");
		}

		printf("\n");
	}


	return 0;
}