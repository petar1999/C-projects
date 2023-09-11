//Korisnik unosi decimalni broj i treba se ograniciti unos na dvije decimale 
//i onda taj decimalni broj zapisati u obliku do kraja skracenog razlomka. 

#include <stdio.h>
#include <math.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else
        return gcd(b, a % b);
}

int main()
{
    float dec;

    scanf("%f", &dec);

    float dec_zaokruzeni = (int)(dec * 100.0) / 100.0;

    int brojnik = dec_zaokruzeni * 100;
    int nazivnik = 100;

    printf("%d/%d\n", brojnik, nazivnik);

    int zajednicki = gcd(brojnik, nazivnik);

    int brojnik_skr = brojnik / zajednicki;
    int nazivnik_skr = nazivnik / zajednicki;

    printf("%d/%d", brojnik_skr, nazivnik_skr);

    return 0;
}
