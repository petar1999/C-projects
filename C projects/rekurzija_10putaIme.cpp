#include<stdio.h>

void rec(int i) {
	if (i <= 10)
	{
		printf("Matea\n");
		rec(i + 1);
	}
}

int main()
{
	int i = 1;
	rec(i);
}
