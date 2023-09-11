#include <stdio.h>
#include <math.h>

//potencije broja kojeg korisnik unese

int main() {
    int lower, upper, br;

    printf("Unesite donju granicu: ");
    scanf("%d", &lower);

    printf("Unesite gornju granicu: ");
    scanf("%d", &upper);

    scanf("%d", &br);

    int pot = 0;
    int number = 1;

    while (number < lower) {
        pot++;
        number = pow(br, pot);
    }

    while (number < upper && pow(br, pot) > lower) {
        printf("%d ", number);
        pot++;
        number = pow(br, pot);
    }


    return 0;
}
