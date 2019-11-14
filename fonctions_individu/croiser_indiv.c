#include <stdio.h>
#include <stdlib.h>
#include "../structures/individu.h"
#include "longueur_indiv.h"
#include "ajouter_indiv_q.h"

individu croiser_indiv(individu personne1, individu personne2, double pCroise) {
    individu nouvel_indiv = NULL;

    for (int i = longueur_indiv(personne1); i > 0; i--) {
        if ((double)rand()/RAND_MAX <= pCroise) {
            nouvel_indiv = ajouter_indiv_q(nouvel_indiv, personne1->valeur);
        }
        else {
            nouvel_indiv = ajouter_indiv_q(nouvel_indiv, personne2->valeur);
        }
        personne1 = personne1->suivant;
        personne2 = personne2->suivant;
    }

    return nouvel_indiv;
}
