//: Za neki dekadski broj N, ispisati (ukljucujuci N) u niz oktalnu vrijednost za svaki broj od 1 do N
//npr za 3:
//0
//0 1
//0 1 2
//0 1 3

#include <string.h>
#include <stdio.h>

void dec_okt(int dec) {
    int okt[16];
    int i = 0;

    while (dec != 0) {
        okt[i] = dec % 8;
        dec = dec / 8;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", okt[j]);
    }
}

int main() {

    int dec;

    scanf("%d", &dec);

    for (int i = 0; i <= dec; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    for (int i = 0; i <= dec; i++) {
        for (int j = 0; j <= i; j++) {
            printf("\t");
            dec_okt(j);
        }
        printf("\n");
    }

    return 0;
}