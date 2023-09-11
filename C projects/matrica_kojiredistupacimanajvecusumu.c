#include<stdio.h>

//Matrica nxn, brojevi u matrici se random generiraju. Program racuna koji stupac i koji redak imaju najvecu srednju vrijednost elemenata.  


int main() {
	int matrica[3][3] = { {4,5,6},{2,5,9},{8,7,4} };
	int suma_redaka[3] = { 0 };
	int suma_stupaca[3] = { 0 };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			suma_redaka[i] = suma_redaka[i] + matrica[i][j];
			suma_stupaca[j] = suma_stupaca[j] + matrica[i][j];
		}
	}

	int max_redak = suma_redaka[0];
	int max_stupac = suma_stupaca[0];

	int redak = 0, stupac = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (suma_redaka[i] > max_redak) {
				max_redak = suma_redaka[i];
				redak = i;
			}
			if (suma_stupaca[i] > max_stupac) {
				max_stupac = suma_stupaca[j];
				stupac = j;
			}ž

		}
		
	}

	printf("%d je u retku %d. ", max_redak, redak);
	printf("%d je u stupcu %d", max_stupac, stupac);



	return 0;
}