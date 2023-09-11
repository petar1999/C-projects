#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    if (*str) {
        reverseString(str + 1);
        printf("%c", *str);
    }
}

int main() {
    char string[] = "Matea";
    reverseString(string);
}