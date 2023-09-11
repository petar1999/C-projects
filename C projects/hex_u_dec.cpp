
//HEX U DECIMALNI

#include <stdio.h>
#include <string.h>

int main()
{
    char hex[100];
    int dec = 0;
    //int ost;
    int baza = 1;
    int i;

    printf("Unesite heksadekadski broj:");
    scanf("%s", hex);

    for (i = strlen(hex) - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            dec = dec + (int(hex[i] - 48)) * baza;
            baza = baza * 16;
        }

        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            dec = dec + (int(hex[i] - 55)) * baza;
            baza = baza * 16;
        }
    }

    printf("To je dekadski broj %d.", dec);

    return 0;
}
