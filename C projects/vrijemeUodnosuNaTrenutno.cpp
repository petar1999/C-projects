#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int h1, m1;
    scanf("%d %d", &h1, &m1);
    if (h1 < 0 || h1>23)
        printf("Unijeli ste pogresan sat.");

    if (m1 < 0 || m1 > 60)
        printf("Unijeli ste pogresne minute.");

    int h2, m2;
    scanf("%d %d", &h2, &m2);
    if (h2 < 0 || h2>23)
        printf("Unijeli ste pogresan sat.");

    if (m2 < 0 || m2 > 60)
        printf("Unijeli ste pogresne minute.");


    int tr = h1 * 60 + m1;
    int cilj = h2 * 60 + m2;
    int preostalo_minuta;

    if (h2 < h1 || (h2 == h1 && m2 < m1)) {
        preostalo_minuta = 1440 - tr + cilj;

    }
    else {
        preostalo_minuta = cilj - tr;
    }

    int preostalo_sati = preostalo_minuta / 60;
    preostalo_minuta = preostalo_minuta % 60;

    printf("Preostalo je %d h i %d min. \n", preostalo_sati, preostalo_minuta);

    return 0;
}
