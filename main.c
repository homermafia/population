#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "simuler_pop.h"
#include "structures/param_qualite.h"

int main()
{
    srand(time(NULL));

    int longIndiv;
    double pCroise;
    int TaillePop;
    int tSelect;
    int nGen;
    char type_fonction;
    double A;
    double B;

    printf("Veuillez entrer la longueur d'un individu: ");
    scanf("%d", &longIndiv);

    printf("\nVeuillez entrer la probabilte de croisement (>= 0 et <= 1): ");
    scanf("%lf", &pCroise);

    printf("\nVeuillez entrer la taille de la population: ");
    scanf("%d", &TaillePop);

    printf("\nVeuillez entrer le taux de selection (>= 0 et <= 100): ");
    scanf("%d", &tSelect);

    printf("\nVeuillez entrer le nombre de generations: ");
    scanf("%d", &nGen);

    scanf("%c", &type_fonction);
    printf("\nVeuillez entrer le type de fonction (voir documentation): ");
    scanf("%c", &type_fonction);

    printf("\nVeuillez entrer la valeur du parametre A: ");
    scanf("%lf", &A);

    printf("\nVeuillez entrer la valeur du parametre B: ");
    scanf("%lf", &B);

    param_qualite parametres = {
        .type_fonction = type_fonction,
        .A = A,
        .B = B
    };

    simuler_pop(longIndiv, pCroise, TaillePop, tSelect, nGen, parametres);

    return 0;
}
