#include <stdio.h>

//isto kao i iz dec u bin samo sto ste dijeli sa 8!!!!

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
    int dec;
    scanf("%d", &dec);
    dec_u_okt(dec);
    return 0;
}