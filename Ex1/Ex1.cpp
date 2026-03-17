#include <stdio.h>
#include <stdlib.h>
/*Question nº1
- adr1 et adr2 sont des pointeurs pointant sur des réels.

- Le contenu de où pointe adr1 vaut -45,78; le contenu de où pointe adr2 vaut 678,89. 

- Ecrire un programme qui ne contient que deux variables(adr1 et adr2) de type 
pointeurs sur réél, qui stocke deux valeurs réelles (-45.78 et 678.89) et qui affiche les 
adresses des espaces mémoires qui stockent les deux rééls ainsi que le contenu de 
ces deux espaces.
*/
int main() {
	double *adr1 = (double*) malloc(sizeof(double));
	double *adr2 = (double*) malloc(sizeof(double));

	*adr1 = -45.78;
	*adr2 = 678.89;

	printf("Adresse de ard1 est : %p\n", adr1);
	printf("La valeur a l'adresse pointer par ard1 est : %f\n", *adr1);

	printf("\nAdresse de ard2 est : %p\n", adr2);
	printf("La valeur a l'adresse pointer par ard2 est : %f\n", *adr2);

	free(adr1);
	free(adr2);
}
