#include<stdio.h>

int fakt(int br) {
	int n;
	if (br <= 0)
		return 0;
	else if (br == 1)
		return 1;
	else
		return br * fakt(br - 1);
}


int main() {
	int br = 3;
	int f = fakt(br);
	printf("%d", f);

	return 0;
}