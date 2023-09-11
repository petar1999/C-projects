//Zamijenite svaki element matrice s sumom dijagonalnih elemenata

#include<stdio.h>

int main() {
	int matrica[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int sum = 0;

	//suma dijagonalnih elemenata

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				sum = sum + matrica[i][j];
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrica[i][j] = sum;
		}
	}

	printf("Nova matrica izgleda ovako:");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", matrica[i][j]);
		}
		printf("\n");
	}

	return 0;
}