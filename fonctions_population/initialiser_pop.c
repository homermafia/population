#include <stdlib.h>
#include "../structures/individu.h"
#include "../structures/population.h"
#include "../fonctions_individu/initialiser_indiv.h"
#include "ajouter_pop_q.h"

// initialise une population compos�e d'individus alatoires de mani�re it�rative
population initialiser_pop_iter(int TaillePop) {
    population personnes = NULL;

    for (int i = 0; i < TaillePop; i++) {
        personnes = ajouter_pop_q(personnes, initialiser_indiv_iter(8));
    }

    return personnes;
}

// initialise une population compos�e d'individus alatoires de mani�re r�cursive
population initialiser_pop_recur(int TaillePop) {
    if (TaillePop == 1) {
        return ajouter_pop_q(NULL, initialiser_indiv_recur(8));
    }
    else {
        return ajouter_pop_q(initialiser_pop_recur(TaillePop - 1), initialiser_indiv_recur(8));
    }
}
