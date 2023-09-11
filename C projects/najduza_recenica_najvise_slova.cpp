//�itas ulazni string, iz njega ispisat najduzu re�enicu i ispisat koliko slova ima.

#include <stdio.h>
#include <string.h>

int main() {
    char input_string[1000];
    printf("Unesite ulazni string: ");
    scanf("%s", input_string);  // U�itaj ulazni string

    int len = strlen(input_string);
    int max_sentence_len = 0;
    char max_sentence[1000];
    int cur_sentence_len = 0;
    char cur_sentence[1000];

    for (int i = 0; i < len; i++) {
        if (input_string[i] == '.' || input_string[i] == '?' || input_string[i] == '!') {
            cur_sentence[cur_sentence_len++] = input_string[i];
            cur_sentence[cur_sentence_len] = '\0';  // Zavr�i trenutnu re�enicu
            if (cur_sentence_len > max_sentence_len) {
                max_sentence_len = cur_sentence_len;
                strcpy(max_sentence, cur_sentence);  // Kopiraj trenutnu re�enicu u najdu�u re�enicu
            }
            cur_sentence_len = 0;  // Po�ni novu re�enicu
        }
        else {
            cur_sentence[cur_sentence_len++] = input_string[i];
        }
    }

    printf("Najduza recenica je: %s\n", max_sentence);
    printf("Broj slova u njoj je: %d\n", max_sentence_len);

    return 0;
}