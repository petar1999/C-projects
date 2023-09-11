#include <stdio.h>

void starija(int d1, int m1, int y1, int d2, int m2, int y2) {
    int d, m, y;
    int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    y = y1 - y2;

    if (m1 < m2) {
        y--;
        m = 12 - (m2 - m1);
    }
    else
        m = m1 - m2;

    if (d1 < d2) {
        m--;
        d = md[m1 - 1] - (d2 - d1);
    }
    else
        d = d1 - d2;

    printf("Osoba je starija za: %d godina, %d mjeseci, %d dana", y, m, d);
}

int main() {
    int d1, m1, y1, d2, m2, y2;

    printf("Unesite datum roğenja 1. osobe (dd mm yyyy):");
    scanf("%d %d %d", &d1, &m1, &y1);

    printf("Unesite datum roğenja 2. osobe (dd mm yyyy):");
    scanf("%d %d %d", &d2, &m2, &y2);

    starija(d1, m1, y1, d2, m2, y2);

    return 0;
}


/*#include <stdio.h>

int main() {
    int dan1, mjesec1, godina1;
    int dan2, mjesec2, godina2;
    int dan3, mjesec3, godina3;

    printf("Unesite datum rodenja prve osobe (dd mm yyyy): ");
    scanf("%d %d %d", &dan1, &mjesec1, &godina1);

    printf("Unesite datum rodenja druge osobe (dd mm yyyy): ");
    scanf("%d %d %d", &dan2, &mjesec2, &godina2);


    int dan_1=godina1*360+mjesec1*30+dan1; //ako uzmmemo prosjek da mjesec ima 30 dana onda godina zapravo ima 360, a ne 365 
    int dan_2=godina2*360+mjesec2*30+dan2;

    // uvesti switch case 
 
    int razlika_dani;
    
    if(dan_2>dan_1){
        razlika_dani=dan_2-dan_1;
        printf("Osoba 1 je starija za %d dana.",razlika_dani);
    }
    else if(dan_2<dan_1){
        razlika_dani=dan_1-dan_2;
        printf("Osoba 2 je starija za %d dana.",razlika_dani);
    }
    else{
        printf("Osobe su roğene na isti dan! \n");
    }
    
    
    
    int godine=razlika_dani/365;
    razlika_dani=razlika_dani%365;
    int mjeseci=razlika_dani/30;
    razlika_dani=razlika_dani%30;
    int dani=razlika_dani;
    
    printf("Osoba je starija za %d g %d m %d d",godine,mjeseci,dani);
    
    
    return 0;
}*/




