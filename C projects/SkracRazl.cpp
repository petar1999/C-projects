#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    double decimalni_broj;

    printf("Unesite decimalni broj: ");
    scanf("%lf", &decimalni_broj);


    decimalni_broj = round(decimalni_broj * 100.0) / 100.0;

    printf("%lf", decimalni_broj);

    // Pretvaramo decimalni broj u razlomak.
    int brojnik = decimalni_broj * 100;
    int nazivnik = 100;
    int nzd = gcd(brojnik, nazivnik);

    // Skraæujemo razlomak.
    brojnik /= nzd;
    nazivnik /= nzd;

    printf("Skraæeni razlomak: %d/%d\n", brojnik, nazivnik);

    return 0;
}

