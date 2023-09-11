#include<stdio.h>


int ispis_ime(int i) {
	if (i <= 10) {
		printf("Ante");
		ispis_ime(i + 1);
	}
}


int main() {
	int i = 1;
	ispis_ime(i);


	return 0;
}