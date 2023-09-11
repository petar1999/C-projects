//Unijeti razlomak na naèin da se zasebno uèita brojnik pa nazivnik. 
//Unijeti zatim decimalni broj s 3 mjesta iza decimalne toèke. Naæi 
//njihov najmanji najmanji zajednièki nazivnik i ispisati ga kao razlomak. 

#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
void skraceni_razlomak(int num1, int num2) {
	int denom;
	denom = gcd(num1, num2);
	num1 /= denom;
	num2 /= denom;
	printf("skraceni_razlomak: %d/%d\n", num1, num2);
}

int main()
{
	float a;
	printf("Upisite decimalni broj: ");
	scanf("%f", &a);
	float dec1 = (int)(a * 1000.0) / 1000.0;
	printf("Zaokruzeno na 3 decimale: %f\n ", dec1);

	float br;
	float nz;

	printf("Unesite brojnik i nazivnik razlomka:");
	scanf("%f %f", &br, &nz);
	printf("Razlomak je : %f/%f\n", br, nz);

	float razlomak = br / nz;
	printf("%f\n", razlomak);
	float rezultat = razlomak - dec1;
	printf("%f\n", rezultat);

	float dec2 = (int)(rezultat * 1000.0) / 1000.0;

	int br1 = dec2 * 1000;
	int nz1 = 1000;

	printf("%d/%d\n", br1, nz1);

	skraceni_razlomak(br1, nz1);

}






