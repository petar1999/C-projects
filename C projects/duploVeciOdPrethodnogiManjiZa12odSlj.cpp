#include <stdio.h>
#include <math.h>

//Dobiješ niz od n brojeva,tribas ispisat sve koji su duplo veæi od prethodnog i za 12 manji od sljedeæeg.

int main() {
    int n[] = { 1,2,14,15,30,42 };

    for (int i = 0; i < 6; i++) {
        if (n[i] == n[i - 1] * 2 && n[i] == n[i + 1] - 12) {
            printf("%d ", n[i]);
        }
    }

    return 0;
}

