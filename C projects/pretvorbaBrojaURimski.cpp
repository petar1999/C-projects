#include <stdio.h>

int main() {
    int i;
    int broj;

    int niz[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
    char* rimski[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };

    printf("Unesite cijeli broj koji zelite pretvoriti u rimski broj: ");
    scanf("%d", &broj);

    if (broj < 1 || broj > 3999) {
        printf("Broj je izvan raspona koji se moze pretvoriti u rimski broj.\n");
    }

    for (i = 0; i < 13; i++) {

        while (broj >= niz[i]) {
            printf("%s", rimski[i]);
            broj = broj - niz[i];

        }
    }

    return 0;
}


