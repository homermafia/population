#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initialiser_individu.h"
#include "decoder_individu.h"


int main()
{
    srand(time(NULL));

    individu personne1 = initialiser_individu_iter(3);
    individu personne2 = initialiser_individu_recur(3);

    printf("personne 1: %c%c%c\n", personne1->valeur, personne1->suivant->valeur, personne1->suivant->suivant->valeur);
    printf("valeur personne 2: %d\n", decoder_individu(personne2));

    return 0;
}
