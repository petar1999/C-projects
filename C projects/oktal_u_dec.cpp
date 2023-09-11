#include <stdio.h>

int okt_u_dec(int oktal) {

    int ostatak;
    int baza = 1;
    int decimal = 0;

    while (oktal != 0) {

        ostatak = oktal % 10;
        oktal = oktal / 10;
        decimal += ostatak * baza;
        baza = baza * 8;

    }

    return decimal;
}


int main() {

    int okt, dec;

    printf("Unesite oktalni broj:");
    scanf("%d", &okt);

    dec = okt_u_dec(okt);
    printf("U dekadskom prikazu on iznosi: %d", dec);


    return 0;
}