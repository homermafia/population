#include <stdio.h>
#include <stdlib.h>
#include "../structures/individu.h"
#include "longueur_indiv.h"
#include "ajouter_indiv_q.h"

// Croise chaque bit de deux individu de même longueur selon la probabilité pCroise (0 <= pCroise <= 1)
void croiser_indiv(individu personne1, individu personne2, double pCroise) {
    for (int i = longueur_indiv(personne1); i > 0; i--) {
        if ((double)rand()/RAND_MAX <= pCroise) { // permuter les bits
            Bit temp = personne1->valeur;
            personne1->valeur = personne2->valeur;
            personne2->valeur = temp;
        }
        personne1 = personne1->suivant;
        personne2 = personne2->suivant;
    }
}
