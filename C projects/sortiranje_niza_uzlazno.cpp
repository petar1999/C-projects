//provjera niza ako je sortiran uzlazno ne radi nista ako nije, 
//sortira ga i ispise

#include <stdio.h>

int main() {

    int b[] = { 1,2,3,4,5 };

    int temp;
    int sortiran = 1;

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (b[j] < b[i]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
                sortiran = 0;
            }
        }
    }

    if (sortiran) {
        printf("NIZ JE SORTIRAN VEÆ");
    }
    else {
        for (int i = 0; i < 5; i++) {
            printf("%d", b[i]);
        }
    }
    return 0;
}