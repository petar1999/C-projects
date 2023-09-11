//Imaš heksadecimalni broj, izracunaj ostatak cjelobrojnog djeljenja s 3, 
//i rezultat ispiši opet u heskadecimalnom obliku. 

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

void dec_hex(int dec) {
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

}

int main() {

    char hex[16];

    scanf("%s", hex);

    int dec = hex_dec(hex);

    int rezultat = dec % 3;

    dec_hex(rezultat);

    return 0;
}

