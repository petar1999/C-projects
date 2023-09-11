//Korisnik unosi neki binarni broj. Potrebno je ispisat sve brojeve od 0 do do tog
//broja u hex, oct, bin i dec formatu. 

#include <string.h>
#include <stdio.h>

void dec_bin(int br) {
    int bin[16];
    int i = 0;

    while (br != 0) {
        bin[i] = br % 2;
        br = br / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }
}

void dec_u_okt(int dec)
{
    int okt[100];
    int i = 0;
    while (dec != 0) {
        okt[i] = dec % 8;
        dec = dec / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", okt[j]);

}

void dec_hex(int decimalni) {
    int ostatak;
    int i = 0;
    char heksadekadski[16];

    while (decimalni != 0) {
        ostatak = decimalni % 16;
        if (ostatak < 10) {
            heksadekadski[i] = ostatak + 48;
        }
        else {
            heksadekadski[i] = ostatak + 55;
        }
        i++;
        decimalni /= 16;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", heksadekadski[j]);
    }
}

int main() {
    int bin;
    int dec = 0;
    int ost;
    int baza = 1;

    scanf("%d", &bin);

    while (bin != 0) {
        ost = bin % 10;
        bin = bin / 10;
        dec = dec + ost * baza;
        baza = baza * 2;
    }

    for (int p = 0; p <= dec; p++) {
        for (int r = 0; r < 1; r++) {
            printf("%d", p);
        }
        printf("\n");
    }

    for (int i = 0; i <= dec; i++) {
        for (int j = 0; j < 1; j++) {
            dec_bin(i);
        }
        printf("\n");
    }

    for (int k = 0; k <= dec; k++) {
        for (int l = 0; l < 1; l++) {
            dec_u_okt(k);
        }
        printf("\n");
    }

    for (int m = 0; m <= dec; m++) {
        for (int n = 0; n < 1; n++) {
            dec_hex(m);
        }
        printf("\n");
    }

    return 0;
}

