#include <stdlib.h>
#include "../structures/individu.h"
#include "../structures/population.h"
#include "../fonctions_individu/initialiser_indiv.h"
#include "ajouter_pop_q.h"

// initialise une population composée d'individus alatoires de manière itérative
population initialiser_pop_iter(int TaillePop, int longIndiv) {
    population personnes = NULL;

    for (int i = 0; i < TaillePop; i++) {
        personnes = ajouter_pop_q(personnes, initialiser_indiv_iter(longIndiv));
    }

    return personnes;
}

// initialise une population composée d'individus alatoires de manière récursive
population initialiser_pop_recur(int TaillePop, int longIndiv) {
    if (TaillePop == 1) {
        return ajouter_pop_q(NULL, initialiser_indiv_recur(longIndiv));
    }
    else {
        return ajouter_pop_q(initialiser_pop_recur(TaillePop - 1, longIndiv), initialiser_indiv_recur(longIndiv));
    }
}
