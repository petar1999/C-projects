//od unesenog stringa ispisat samo velika slova #include <string.h>#include <stdio.h>#include <ctype.h>int main() {    char str[] = "mAtEa";    for (int i = 0; i < strlen(str); i++) {        if (isupper(str[i])) {            printf("%c", str[i]);        }    }}