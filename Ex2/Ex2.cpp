/*Question nº2
Soit adr_deb un pointeur sur entiers, vous ferez en sorte que adr_deb pointe sur un 
emplacement mémoire suffisant afin de stocker 6 entiers donnés par l’utilisateur. 

Puis vous rangerez ces valeurs dans l’ordre croissant.

Rechercher le maximum, l'afficher ainsi que son adresse et sa position.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	//pointeur
	int* adr_deb = (int*)malloc(6*sizeof(int));

	//saisie des valeurs
	printf("Donner 6 valeurs : \n"); 
	for (int p = 0; p < 6; p++) { 
		scanf_s("%d", &adr_deb[p]); 
	}

	//trie des valeurs
	int sauve = 0;

	for (int t = 0; t < 6; t++) {
		for (int more = 0; more < 6-1; more++) {
			if (adr_deb[more] > adr_deb[more + 1]) {
				sauve = adr_deb[more];
				adr_deb[more] = adr_deb[more + 1];
				adr_deb[more + 1] = sauve;	
			}	
			
		}
		
	}

	// Maximum
	int* maximum = &adr_deb[5];

	printf("\nMaximum : %d\n", *maximum);
	printf("Adresse : %p\n", &adr_deb[5]);
	printf("Position : \n");


	free(adr_deb);
	return 0;
}