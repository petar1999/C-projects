#include <stdio.h>
#include <string.h>

//Korisnik unosi string npr. abe, a ispiše se aabbee

int main() {
    char str[100];
    int i, j;

    printf("Unesite string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        for (j = 0; j < 2; j++) {
            printf("%c", str[i]);
        }
    }

    return 0;
}
