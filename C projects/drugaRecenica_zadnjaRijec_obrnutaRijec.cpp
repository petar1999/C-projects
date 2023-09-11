
#include <stdio.h>
#include <string.h>

int main() {
    char rec[100] = "Ja sam Matea. To je super.";
    char a[100] = "Danas je petak.";
    char nova[50];
    int i, d;
    int e = 0;
    int rijeci = 0;

    for (i = 0; i < strlen(rec); i++) {
        if (rec[i] == '.' || rec[i] == '?' || rec[i] == '!') {
            d = i;
            break;
        }
    }

    for (int w = d + 1; w < strlen(rec); w++) {
        if (rec[w] == '.' || rec[w] == '?' || rec[w] == '!') {
            break;
        }
        else {
            nova[e++] = rec[w];
        }
    }
    nova[e] = '\0';


    printf("%s", nova);

    for (int k = 0; k < strlen(a); k++) {
        if (a[k] == ' ')
            rijeci++;
    }

    printf("%d", rijeci + 1);

    int d;
    for (i = 0; i < strlen(a); i++) {
        if (a[i] == ' ')
            d = i;

    }

    for (i = d + 1; i < strlen(a) - 1; i++) {
        printf("%c", a[i]);
    }

    for (i = strlen(a) - 2; i >= d + 1; i--) {
        printf("%c", a[i]);
    }

    return 0;
}