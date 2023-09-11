//Zadan neki tekst i treba izdvojiti drugu recenicu i iz nje ispisat sve rijeci koje imaju neparan broj samoglasnika

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int broj_samoglasnika(char rijec[]) {
    int br = 0;
    //pretvoriti u mala slova sve:
    for (int i = 0; i < strlen(rijec); i++) {
        rijec[i] = tolower(rijec[i]);
    }

    for (int i = 0; i < strlen(rijec); i++) {
        if (rijec[i] == 'a' || rijec[i] == 'e' || rijec[i] == 'i' || rijec[i] == 'o' || rijec[i] == 'u')
            br++;
    }
    return br;
}

int main()
{
    char recenica[100] = "Ja sam Matea. Volim pizzu.";
    char nova[50];
    int i;
    int d;
    int e = 0;
    int k = 0;
    char rijec[50];
    int r = 0;

    for (i = 0; i < strlen(recenica); i++) {
        if (recenica[i] == '.' || recenica[i] == '?' || recenica[i] == '!') {
            d = i;
            break;
        }
    }

    for (int w = d + 1; w < strlen(recenica); w++) {
        if (recenica[w] == '.' || recenica[w] == '?' || recenica[w] == '!') {
            break;
        }
        else {
            nova[e++] = recenica[w];
        }
    }
    nova[e] = '\0';


    printf("%s\n", nova);


    while (k < strlen(nova)) {
        while (nova[k] == ' ') {
            k++;
        }

        while (nova[k] != ' ' && nova[k] != '\0') {
            rijec[r++] = nova[k];
            k++;
        }
        rijec[r] = '\0';
        r = 0;

        if (broj_samoglasnika(rijec) % 2 != 0) {
            printf("%s\n", rijec);
        }
    }

    return 0;
}
