//BEZ KORISTENJA % I /

#include <stdio.h>
#include <string.h>

int main() {
    char a[100];
    printf("Unesite broj: ");
    scanf("%s", a);
    int length = strlen(a);

    if (a[length - 1] == '0' || a[length - 1] == '2' || a[length - 1] == '4' || a[length - 1] == '6' || a[length - 1] == '8') {
        printf("Broj %s je paran.\n", a);
    }
    else {
        printf("Broj %s je neparan.\n", a);
    }
    return 0;
}

//DRUGI NACIN
/*int main() {
    int n;
    printf("Unesite broj: ");
    scanf("%d", &n);

    if ((n & 1) == 0) {
        printf("%d je paran.\n", n);
    } else {
        printf("%d je neparan.\n", n);
    }
    return 0;
}
*/