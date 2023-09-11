
//zbroj 2 oktalna broja, i ispisati njihovu suma u 16znamenkastom binarom obliku 

#include <string.h>
#include <stdio.h>

int okt_dec(int okt) {
    int dec = 0;
    int ost;
    int baza = 1;

    while (okt != 0) {
        ost = okt % 10;
        okt = okt / 10;
        dec = dec + ost * baza;
        baza = baza * 8;
    }
    return dec;
}

int main()
{
    int okt1, okt2;

    printf("1. oktalni:");
    scanf("%d", &okt1);

    printf("2. oktalni:");
    scanf("%d", &okt2);

    int deco1 = okt_dec(okt1);
    int deco2 = okt_dec(okt2);

    int zbroj = deco1 + deco2;

    int bin[16];
    int i = 0;

    while (zbroj != 0) {
        bin[i] = zbroj % 2;
        zbroj = zbroj / 2;
        i++;
    }

    for (int j = 15; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    return 0;
}
