//Pretvaranje iz oktalnog u hexa

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

int main() {
    int okt;

    scanf("%d", &okt);

    int dec = okt_dec(okt);

    printf("%d", dec);

    char hex[16];
    int i = 0;
    int ost;

    while (dec != 0) {
        ost = dec % 16;

        if (ost < 10) {
            hex[i] = ost + 48;
            i++;
        }

        else {
            hex[i] = ost + 55;
            i++;
        }
        dec = dec / 16;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    return 0;
}
