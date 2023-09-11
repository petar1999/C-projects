//Pretvaranje iz heksadecimalnog u oktalni 

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


int main() {
    char hex[16];

    scanf("%s", hex);

    int dec = heksa_dec(hex);

    printf("%d", dec);

    dec_u_okt(dec);

    return 0;
}
