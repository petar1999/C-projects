#include <stdio.h>
#include <stdlib.h>

int main()
{
    // U�itaj trenutni datum
    int current_day, current_month, current_year;
    printf("Unesite danasnji datum u formatu 'dd mm yyyy': ");
    scanf("%d %d %d", &current_day, &current_month, &current_year);

    // U�itaj datum ro�enja korisnika
    int birth_day, birth_month, birth_year;
    printf("Unesite datum rodenja u formatu 'dd mm yyyy': ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    // Izra�unaj koliko dana ima do sljede�eg ro�endana korisnika
    int days_until_birthday;
    if (birth_month < current_month || (birth_month == current_month && birth_day < current_day)) {
        // Ako je ro�endan ve� pro�ao ove godine, sljede�i �e biti idu�e godine
        days_until_birthday = (365 - (current_day + (30 * (current_month - 1))) + (birth_day + (30 * (birth_month - 1))));
    }
    else {
        days_until_birthday = (birth_day - current_day) + (30 * (birth_month - current_month));
    }

    int age_on_birthday = current_year - birth_year;
    // Izra�unaj koliko godina �e korisnik imati na sljede�i ro�endan

    if (birth_month < current_month || (birth_month == current_month && birth_day < current_day)) {
        age_on_birthday++;
    }
    else
        age_on_birthday;

    // Ispi�i rezultat
    printf("Do vaseg sljedeceg rodendana ima %d dana, a tada cete imati %d godina.\n", days_until_birthday, age_on_birthday);

    return 0;
}



