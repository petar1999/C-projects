#include <stdio.h>

int main() {
    int n, sum_prev, sum_next, i;

    printf("Unesite broj u rasponu od 1 do 200: ");
    scanf("%d", &n);

    // izra�unaj zbroj prethodna 3 broja
    sum_prev = 0;
    for (i = n - 3; i < n; i++) {
        sum_prev += i;

    }

    printf("%d\n", sum_prev);

    // izra�unaj zbroj sljede�a 3 broja
    sum_next = 0;
    for (i = n + 3; i > n; i--) {
        sum_next += i;
    }

    printf("%d\n", sum_next);

    // izra�unaj razliku
    int razlika = sum_prev - sum_next;

    printf("Rezultat: %d\n", razlika);

    return 0;
}