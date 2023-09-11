#include <stdio.h>
#include <math.h>

int main() {
    int bin;
    int baza = 1;
    int ost;
    int dec = 0;

    printf("Unesite binarni broj: ");
    scanf("%d", &bin);

    while (bin != 0) {
        ost = bin % 10;
        bin /= 10;
        dec += baza * ost;
        baza = baza * 2;
    }

    printf("Dekadski broj: %d", dec);
    return 0;
}

