#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Uèitaj trenutni datum
    int current_day, current_month, current_year;
    printf("Unesite danasnji datum u formatu 'dd mm yyyy': ");
    scanf("%d %d %d", &current_day, &current_month, &current_year);

    // Uèitaj datum roğenja korisnika
    int birth_day, birth_month, birth_year;
    printf("Unesite datum rodenja u formatu 'dd mm yyyy': ");
    scanf("%d %d %d", &birth_day, &birth_month, &birth_year);

    // Izraèunaj koliko dana ima do sljedeæeg roğendana korisnika
    int days_until_birthday;
    if (birth_month < current_month || (birth_month == current_month && birth_day < current_day)) {
        // Ako je roğendan veæ prošao ove godine, sljedeæi æe biti iduæe godine
        days_until_birthday = (365 - (current_day + (30 * (current_month - 1))) + (birth_day + (30 * (birth_month - 1))));
    }
    else {
        days_until_birthday = (birth_day - current_day) + (30 * (birth_month - current_month));
    }

    int age_on_birthday = current_year - birth_year;
    // Izraèunaj koliko godina æe korisnik imati na sljedeæi roğendan

    if (birth_month < current_month || (birth_month == current_month && birth_day < current_day)) {
        age_on_birthday++;
    }
    else
        age_on_birthday;

    // Ispiši rezultat
    printf("Do vaseg sljedeceg rodendana ima %d dana, a tada cete imati %d godina.\n", days_until_birthday, age_on_birthday);

    return 0;
}



