//unijeti troznamenkasti heksadekadski broj, unijeti dvoznamenkasti dekadski random broj, 
//ispisati njihovu razliku u binarnom obliku 

#include <string.h>
#include <stdio.h>

int hex_dec(char hex[]) {
    int dec = 0;
    int baza = 1;

    for (int i = strlen(hex) - 1; i >= 0; i--) {

        if (hex[i] >= '0' && hex[i] <= '9') {
            dec = dec + (int)(hex[i] - 48) * baza;
            baza = baza * 16;
        }

        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            dec = dec + (int)(hex[i] - 55) * baza;
            baza = baza * 16;
        }
    }
    return dec;
}

int main() {
    char hex[3];
    int dec2;

    scanf("%s", hex);

    while (strlen(hex) != 3) {
        printf("Ponovno unesi TROZNAMENKASTI broj");
        scanf("%s", hex);
    }

    scanf("%d", &dec2);

    while (dec2 < 10 || dec2>100) {
        printf("Ponovno unesi DVOZNAMENKASTI broj");
        scanf("%d", &dec2);
    }

    int dec1 = hex_dec(hex);

    printf("%d\n", dec1);

    int razlika = dec1 - dec2;
    printf("%d\n", razlika);

    int bin[16];
    int i = 0;

    while (razlika != 0) {
        bin[i] = razlika % 2;
        razlika = razlika / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bin[j]);
    }

    return 0;
}