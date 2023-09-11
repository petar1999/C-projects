#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    else
        return gcd(x, x % y);
}

int main() {
    int a, b, c, d;
    int naz, br;
    int denom;

    printf("Unesite brojnik i nazivnik 1. razlomka:");
    scanf("%d %d", &a, &b);

    printf("Unesite brojnik i nazivnik 2. razlomka:");
    scanf("%d %d", &c, &d);

    printf("Unijeti razlomci su: %d/%d i %d/%d\n", a, b, c, d);

    br = a * d + c * b;
    naz = b * d;

    printf("Zbroj neskraæenih razlomaka je: %d/%d\n", br, naz);

    denom = gcd(br, naz);

    br = br / denom;
    naz = naz / denom;

    if (br == naz) {
        printf("Zbroj skraæenih razlomaka je: %d\n", br);
    }
    else
        printf("Zbroj skraæenih razlomaka je: %d/%d\n", br, naz);


    return 0;
}