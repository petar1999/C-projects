#include <stdio.h>
#include <math.h>

//Dobije� niz od n brojeva,tribas ispisat sve koji su duplo ve�i od prethodnog i za 12 manji od sljede�eg.

int main() {
    int n[] = { 1,2,14,15,30,42 };

    for (int i = 0; i < 6; i++) {
        if (n[i] == n[i - 1] * 2 && n[i] == n[i + 1] - 12) {
            printf("%d ", n[i]);
        }
    }

    return 0;
}

