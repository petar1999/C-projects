#include<stdio.h>

//Korisnik unosi HH:MM, te se raèuna koliko je minuta ostalo u danu.

int main() {
    int h, m;
    int ukupno_m = 24 * 60;

    scanf("%d %d", &h, &m);

    int minute = h * 60 + m;

    int preostalo = ukupno_m - minute;

    printf("preostalo je: %d min", preostalo);


}