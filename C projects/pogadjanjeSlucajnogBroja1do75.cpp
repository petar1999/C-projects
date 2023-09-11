#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {

    int br;
    srand(time(0));
    int random = rand() % 75 + 1;
    int pokusaj = 0;

    do {
        printf("Unesi broj od 1 do 75:");
        scanf("%d", &br);
        pokusaj++;

        if (br > random) {
            printf("Unijeli ste broj veæi od zamišljenog!");
        }

        else if (br < random) {
            printf("Unijeli ste broj manji od zamisljenog");

        }
        else
            break;

    } while (br != random);

    printf("Pogodili ste broj %d iz %d. pokusaja!!", br, pokusaj);
    return 0;
}