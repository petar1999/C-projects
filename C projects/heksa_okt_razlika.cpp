
//Korisnik unosi 8 znamenkasti heksadecimalni broj i 8 znamenkasti oktalni.
//NNapisi program koji raèuna njihovu razliku i daje rezultat.
#include <string.h>
#include <stdio.h>

int heksa_dec(char hex[]) {
    int i;
    int baza = 1;
    int dec = 0;

    for (i = strlen(hex) - 1; i >= 0; i--) {

        if (hex[i] >= '0' && hex[i] <= '9') {
            dec = dec + (int)(hex[i] - 48) * baza;
            baza = baza * 16;
        }

        else if (hex[i] >= 'A' && hex[i] <= 'Z') {
            dec = dec + (int)(hex[i] - 55) * baza;
            baza = baza * 16;

        }
    }
    return dec;
}

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

    int dec;
    char hex[100];
    int okt;

    int deco;
    int dech;

    printf("Heksa:");
    scanf("%s", hex);

    printf("Oktalni:");
    scanf("%d", &okt);

    dech = heksa_dec(hex);

    deco = okt_dec(okt);

    int razlika = dech - deco;

    printf("Razlika: %d", razlika);

    return 0;
}
