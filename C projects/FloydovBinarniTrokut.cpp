#include <stdio.h>

void binarniFloydovtrokut(int n) {

    int row, col;

    for (row = 0; row < n; row++)
    {
        for (col = 0; col <= row; col++)
        {
            if (((row + col) % 2) == 0)
                printf("0");
            else
                printf("1");

        }
        printf("\n");
    }
}


int main(void)
{
    int n = 4;
    binarniFloydovtrokut(n);
    return 0;
}