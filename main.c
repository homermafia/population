#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions_individu/initialiser_indiv.h"
#include "fonctions_individu/decoder_indiv.h"

int main()
{
    srand(time(NULL));

    individu personne1 = initialiser_indiv_iter(3);
    individu personne2 = initialiser_indiv_recur(3);

    printf("personne 1: %c%c%c\n", personne1->valeur, personne1->suivant->valeur, personne1->suivant->suivant->valeur);
    printf("valeur personne 1: %d\n\n", decoder_indiv(personne1));

    printf("personne 2: %c%c%c\n", personne2->valeur, personne2->suivant->valeur, personne2->suivant->suivant->valeur);
    printf("valeur personne 1: %d\n", decoder_indiv(personne2));

    return 0;
}
