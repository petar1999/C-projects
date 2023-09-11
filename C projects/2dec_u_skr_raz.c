#include <stdio.h>
#include <string.h>
#include <ctype.h>


//Korisnik unosi decimalni broj, treba se ograniciti unos na dvije decimale 
//i onda taj decimalni broj zapisat u obliku do kraja skracenog razlomka.


int gcd(int x, int y) {
	if (y == 0) {
		return x;
	}
	else
		return gcd(y, x % y);
}

int main() {
	float dec;
	printf("%f", &dec);

	float dec1 = (int)(dec * 100.0) / 100.0;
	int a, b;

	a = dec1 * 100;
	b = 100;

	printf("%d/%d", a, b);
	printf("/n");

	int zaj = gcd(a,b);

	int c = a / zaj;
	int d = b / zaj;

	printf("%d/%d", c, d);

	return 0;
} 