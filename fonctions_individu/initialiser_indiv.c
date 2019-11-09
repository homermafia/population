#include <stdlib.h>
#include "../structures/individu.h"
#include "ajouter_indiv_q.h"

// initialise un individu composé de bits alatoires de manière itérative
individu initialiser_indiv_iter(int longIndiv) {
    individu personne = NULL;

    for (int i = 0; i < longIndiv; i++) {
        personne = ajouter_indiv_q(personne, rand()%2 + '0');
    }

    return personne;
}

// initialise un individu composé de bits alatoires de manière récursive
individu initialiser_indiv_recur(int longIndiv) {
    if (longIndiv == 1) {
        return ajouter_indiv_q(NULL, rand()%2 + '0');
    }
    else {
        return ajouter_indiv_q(initialiser_indiv_recur(longIndiv - 1), rand()%2 + '0');
    }
}
