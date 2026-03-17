/*Calculer et afficher les racines de ax2+bx+c=0.
- Une fonction de prototype void saisie(float *aa,float *bb,float *cc) permet de saisir a,b,c.

- Une fonction de prototype float *calcul(float aa,float bb,float cc) exécute les calculs et renvoie les résultats.

- a, b, c sont des variables locales à main(); 

- main() se contente de saisir a,b et c puis d'appeler saisie et calcul et d’afficher les solutions.*/

#include<stdio.h>
#include<math.h>

void saisie(float* aa, float* bb, float* cc) {
	printf_s("Quelle est la valeur de a : ");
	scanf_s("%f", aa);

	printf_s("Quelle est la valeur de b : ");
	scanf_s("%f", bb);

	printf_s("Quelle est la valeur de c : ");
	scanf_s("%f", cc);
}

void calcul(float aa, float bb, float cc) {
    /* Calcul du discriminant */
    float delta = bb * bb - 4 * aa * cc;

    if (delta > 0) {
        float racine = sqrt(delta);

        float solution1 = (-bb - racine) / (2 * aa);
        float solution2 = (-bb + racine) / (2 * aa);

        printf("L'equation admet 2 solutions reelles.\n");

        if (solution1 < solution2) {
            printf("S = {%f ; %f}\n", solution1, solution2);
        }
        else{
            printf("S = {%f ; %f}\n", solution2, solution1);
        }
    }
    else if (delta < 0) {
        printf("L'equation n'admet aucune solution reelle.\n");
    }
    else {
        float solution = -bb / (2 * aa);

        printf("L'equation admet une solution reelle.\n");
        printf("S = {%f}\n", solution);
    }
}

int main() {
	/*Variable*/
	float a = 0;
	float b = 0;
	float c = 0;

	saisie(&a, &b, &c);
	calcul(a, b, c);
}