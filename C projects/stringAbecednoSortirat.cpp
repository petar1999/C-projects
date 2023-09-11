#include <stdio.h>
#include <string.h>

// za MATEA ispis AAETM

int main ()
{
	char string[100];
	scanf("%s",string);
	char temp;
	int i, j;
	int n = strlen(string);

	for (i = 0; i < n-1; i++) {
		for (j = i+1; j < n; j++) {
			if (string[i] > string[j]) {
					temp = string[i];
					string[i] = string[j];
					string[j] = temp;
			}
		}
	}

	printf("Poslije sortiranja:");
	for(int k=0; k<strlen(string); k++){
		printf("%c", string[k]);
	}
}
