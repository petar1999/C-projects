#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100] = "MatEa";
    int i;

    for (i = 0; i < strlen(str); i++) {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);

        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    // Ispišite novu matricu.
    for (i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    return 0;
}