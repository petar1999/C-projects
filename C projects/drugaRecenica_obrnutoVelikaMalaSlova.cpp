#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char str[] = "Ja sam Matea. Najvise na svijetu.";
    char novi[100];
    int j = 0;
    int d, k;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            d = i;

            break;
        }
    }

    for (int j = d + 1; j < strlen(str); j++) {
        if (str[j] == '.' || str[j] == '!' || str[j] == '?') {
            break;
        }
        else
        {
            novi[k++] = str[j];
        }
    }
    novi[k] = '\0';

    printf("%s\n", novi);


    for (int i = 0; i < strlen(novi); i++) {
        if (isupper(novi[i]))
            novi[i] = tolower(novi[i]);

        else if (islower(novi[i]))
            novi[i] = toupper(novi[i]);
    }


    printf("%s\n", novi);

    for (int i = strlen(novi) - 1; i >= 0; i--) {
        printf("%c", novi[i]);
    }


    return 0;
}
