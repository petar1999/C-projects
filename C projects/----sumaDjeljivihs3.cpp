


//Napisite program  u koji se unosi 100 pozitivnih brojeva. Program izracunava 
//sumu brojeva koji su djeljivi sa 3 i na kraju je ispise. Ukoliko se unese 
//negativan broj, program se terminira i ispise se trenutna suma. 


#include<stdio.h>

int main() {
	int br[100];
	int i = 0;
	int sum = 0;

	while (i <= 99) {
		scanf("%d", &br[i]);

		if (br[i] % 3 == 0 && br[i] > 0) { // ako unesemo -3 on ce raditi po ovoj if petlji,nece prekinuti, zato je potreban uvjet da je veci od nula
			sum = sum + br[i];
			i++;
		}
		else if (br[i] < 0)
			break;
		else
			i++;

	}

	printf("%d", sum);

	return 0;
}


