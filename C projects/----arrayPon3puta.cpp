#include <stdio.h>

//ispisati brojeve koji se ponavljaju 3 puta u novi niz

int main() {
    int array[] = { 1, 2, 3, 3, 3, 5, 6, 6, 6, 5 }; 
    int count, i, j, k;
    int new_array[10] = { 0 };

    for (i = 0; i < 10; i++) {
        count = 0;
        
        for (j = 0; j < 10; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
       
        if (count == 3) {
            for (k = 0; k < 10; k++) {
                if (new_array[k] == array[i]) {
                    break;
                }
            }
            if (k == 10) {
                for (k = 0; k < 10; k++) {
                    if (new_array[k] == 0) {
                        new_array[k] = array[i];
                        break;
                    }
                }
            }
        }
    }

    for (i = 0; i < 10; i++) {
        if (new_array[i] != 0) {
            printf("%d ", new_array[i]);
        }
    }
    printf("\n");

    return 0;
}
