#include <stdio.h>
#include <string.h>

int fakt(int num) {
    int n;
    if (num <= 0)
        return 0;
    else if (num == 1)
        return 1;
    else 
        return num * fakt(num - 1);
}

int main() {
    int br = 3;
    int f = fakt(br);
    printf("%d", f);
    return 0;
}
