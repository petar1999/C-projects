//imas string neke recenice, treba odredit koliko ima rijeci 
//koje pocinju sa velikim slovom i ispisat ih 


#include<string.h>
#include<ctype.h>
#include<stdio.h>

int main() {
	char str[] = "Ante Doko doKoKoKo";
	int i = 0;
	int num_uppercase;

	for (i = 0; str[i] != '\0'; i++) {
		if (i == 0 || isspace(str[i - 1])) {
			if (isupper(str[i])) {
				num_uppercase++;
				printf("%c", str[i]);

				while (isalpha(str[i + 1])) {
					i++;
					printf("%c", str[i]);
				}
			}
			printf(" ");
		}
	}

	printf("%d",num_uppercase);
	return 0;
}