#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions_individu/initialiser_indiv.h"
#include "fonctions_individu/decoder_indiv.h"
#include "fonctions_individu/croiser_indiv.h"
#include "fonctions_individu/qualite_indiv.h"

int main()
{
    srand(time(NULL));

    individu personne1 = initialiser_indiv_iter(8);
    individu personne2 = initialiser_indiv_recur(8);

    printf("Avant croisement:\n");
    printf("personne 1: %c%c%c%c %c%c%c%c\n", personne1->valeur, personne1->suivant->valeur, personne1->suivant->suivant->valeur, personne1->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 1: %d\n\n", decoder_indiv(personne1));

    printf("personne 2: %c%c%c%c %c%c%c%c\n", personne2->valeur, personne2->suivant->valeur, personne2->suivant->suivant->valeur, personne2->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 2: %d\n\n", decoder_indiv(personne2));

    croiser_indiv(personne1, personne2, 0.5);

    printf("Apres croisement:\n");
    printf("personne 1: %c%c%c%c %c%c%c%c\n", personne1->valeur, personne1->suivant->valeur, personne1->suivant->suivant->valeur, personne1->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 1: %d\n\n", decoder_indiv(personne1));

    printf("personne 2: %c%c%c%c %c%c%c%c\n", personne2->valeur, personne2->suivant->valeur, personne2->suivant->suivant->valeur, personne2->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 2: %d\n\n", decoder_indiv(personne2));

    printf("qualite personne 1: %.2f\n", qualite_indiv(decoder_indiv(personne1)));
    printf("qualite personne 2: %.2f\n", qualite_indiv(decoder_indiv(personne2)));

    return 0;
}
