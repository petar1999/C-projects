#include <stdio.h>
#include <string.h>

int main() {
                                                             
    /*char string[100] = "ja sam matea";
     int j = 0;

    int freq[26] = { 0 };

    for (int i = 0; i < strlen(string); i++) {     // bez razmaka i pretvorimo u mala slova!
        if (isalpha(string[i])) {
            string[j++] = tolower(string[i]);
        }
    }
    string[j] = '\0';

    for (int i = 0; i < strlen(string); i++) {
        char c = string[i];

        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }

    }*/
    char sentence[1000];
    int freq[26] = { 0 };  // inicijalizacija svih frekvencija na 0

    printf("Unesite reèenicu: ");
    scanf("%s", sentence);  // èitanje reèenice

    int len = strlen(sentence);

    // petlja koja æe prebrojati frekvencije svakog slova u reèenici
    for (int i = 0; i < len; i++) {
        char c = sentence[i];

        if (c >= 'a' && c <= 'z') {
            freq[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            freq[c - 'A']++;
        }
    }

    // pronalazak tri slova koja se najviše ponavljaju
    int max_freq[3] = { 0 };
    char max_chars[3];

    for (int i = 0; i < 26; i++) {
        if (freq[i] > max_freq[0]) {
            max_freq[2] = max_freq[1];
            max_freq[1] = max_freq[0];
            max_freq[0] = freq[i];

            max_chars[2] = max_chars[1];
            max_chars[1] = max_chars[0];
            max_chars[0] = 'a' + i;
        }
        else if (freq[i] > max_freq[1]) {
            max_freq[2] = max_freq[1];
            max_freq[1] = freq[i];

            max_chars[2] = max_chars[1];
            max_chars[1] = 'a' + i;
        }
        else if (freq[i] > max_freq[2]) {
            max_freq[2] = freq[i];
            max_chars[2] = 'a' + i;
        }
    }

    // ispis frekvencija svakog slova
    printf("Frekvencije slova:\n");
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            printf("%c: %d\n", 'a' + i, freq[i]);
        }
    }

    // ispis tri slova koja se najviše ponavljaju
    printf("Tri slova koja se najviše ponavljaju:\n");
    for (int i = 0; i < 3; i++) {
        printf("%c (%d)\n", max_chars[i], max_freq[i]);
    }

    return 0;
}
