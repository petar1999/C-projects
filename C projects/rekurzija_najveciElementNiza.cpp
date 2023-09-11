#include <stdio.h>

int max(int array[], int size) {
    int maximum;

    // Bazni sluèaj
    if (size == 1) {
        return array[0];
    }

    // Rekurzivni poziv
    maximum = max(array, size - 1);

    // Usporedba s trenutnim elementom
    if (array[size - 1] > maximum) {
        return array[size - 1];
    }
    else {
        return maximum;
    }
}

int main() {
    int array[] = { 1, 5, 3, 8, 2 };
    int maximum = max(array, 5);

    printf("Najveci element u nizu je: %d\n", maximum);

    return 0;
}


//REKURZIJA KOJA VRAÆA NAJMANJI BROJ

/*#include <stdio.h>
#include <string.h>

int min(int array[], int size) {
    int minimum;

    // Bazni sluèaj
    if (size == 1) {
        return array[0];
    }

    // Rekurzivni poziv
    minimum = min(array, size - 1);

    // Usporedba s trenutnim elementom
    if (array[size - 1] < minimum) {
        return array[size - 1];
    }
    else {
        return minimum;
    }
}

int main() {
    int array[] = { 6, 5, 3, 8, 2 };
   
    int minimum = min(array, 5);

    printf("%d", minimum);

    return 0;
}*/