//Èitas ulazni string, iz njega ispisat najduzu reèenicu i ispisat koliko slova ima.

#include <stdio.h>
#include <string.h>

int main() {
    char input_string[1000];
    printf("Unesite ulazni string: ");
    scanf("%s", input_string);  // Uèitaj ulazni string

    int len = strlen(input_string);
    int max_sentence_len = 0;
    char max_sentence[1000];
    int cur_sentence_len = 0;
    char cur_sentence[1000];

    for (int i = 0; i < len; i++) {
        if (input_string[i] == '.' || input_string[i] == '?' || input_string[i] == '!') {
            cur_sentence[cur_sentence_len++] = input_string[i];
            cur_sentence[cur_sentence_len] = '\0';  // Završi trenutnu reèenicu
            if (cur_sentence_len > max_sentence_len) {
                max_sentence_len = cur_sentence_len;
                strcpy(max_sentence, cur_sentence);  // Kopiraj trenutnu reèenicu u najdužu reèenicu
            }
            cur_sentence_len = 0;  // Poèni novu reèenicu
        }
        else {
            cur_sentence[cur_sentence_len++] = input_string[i];
        }
    }

    printf("Najduza recenica je: %s\n", max_sentence);
    printf("Broj slova u njoj je: %d\n", max_sentence_len);

    return 0;
}