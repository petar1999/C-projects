#include <stdio.h>

int main() {
    char number[100];
    int len, i, dotIndex, intSum = 0, fracSum = 0;

    while (1) {
        printf("Unesite decimalni broj: ");
        scanf("%s", number);

        len = 0;
        while (number[len] != '\0') {
            if (number[len] == '.') {
                dotIndex = len;
            }
            len++;
        }

        if (len - dotIndex <= 6) {
            break;
        }

        printf("Broj mora imati najviše 5 decimalnih mjesta.\n");
    }

    printf("Unijeli ste broj: %s\n", number);

    printf("Cjelobrojni dio: ");
    for (i = 0; i < dotIndex; i++) {
        printf("%c", number[i]);
        intSum += number[i] - '0';
    }
    printf("\n");

    printf("Decimalni dio: ");
    for (i = dotIndex + 1; i < len; i++) {
        printf("%c", number[i]);
        fracSum += number[i] - '0';
    }
    printf("\n");

    int product = intSum * fracSum;
    printf("Umnožak znamenki: %d\n", product);

    return 0;
}
