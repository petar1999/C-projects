/*palindrom rijec*/

#include <string.h>
#include <stdio.h>

int main() {
    char rijec[50];
    int i;

    printf("Unesi rijec:");
    scanf("%s", rijec);

    int palindrom = 1;

    for (i = 0; i < strlen(rijec) / 2; i++) {

        if (rijec[i] != rijec[strlen(rijec) - 1 - i]) {
            palindrom = 0;
        }
    }

    if (palindrom)
        printf("Unesena rijec je palindrom");
    else
        printf("Unesena rijec nije palindrom");

    return 0;
}

/*Je li rijec u recenici palindrom*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i, j;

    for (i = 0; i < strlen(str) / 2; i++) {

        if (str[i] != str[strlen(str) - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char sentence[100], word[20];
    int i = 0, j = 0;

    printf("Unesite recenicu: ");
    scanf("%s", sentence);

    for (i = 0; i<strlen(sentence); i++) {
        if (isalpha(sentence[i])) {
            word[j++] = sentence[i];
        }
        else {
            word[j] = '\0';
            if (is_palindrome(word)) {
                printf("%s\n", word);
            }
            j = 0;
        }
    }

    word[j] = '\0';
    if (is_palindrome(word)) {
        printf("%s\n", word);
    }

    return 0;
}


/*JE LI UNESENA RECENICA PALINDROM*/
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int main() {
    char sentence[50] = "Ana voli milovana.";
    int i;
    int j = 0;

    int palindrom = 1;

    for (i = 0; i < strlen(sentence); i++) {
        if (isalpha(sentence[i])) {  //if (!isspace(sentence[i])){
            sentence[j++] = tolower(sentence[i]);
        }
    }
    sentence[j] = '\0';

    for (i = 0; i < strlen(sentence) / 2; i++) {

        if (sentence[i] != sentence[strlen(sentence) - 1 - i]) {
            palindrom = 0;
        }
    }

    if (palindrom)
        printf("Unesena recenica je palindrom");
    else
        printf("Unesena recenica nije palindrom");

    return 0;
}
