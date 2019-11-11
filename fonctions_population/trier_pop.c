#include <stdlib.h>

#include "../fonctions_individu/decoder_indiv.h"
#include "../fonctions_individu/qualite_indiv.h"

#include "../structures/population.h"
#include "ajouter_pop_q.h"
#include "longueur_pop.h"
#include "enchainer_pop.h"

// trie la population selon la qualité de chaque indivu par odre décroissant en utilisant le Quicksort
population trier_pop(population personnes) {
    if (longueur_pop(personnes) == 0) {
        return NULL;
    }
    else {
        double pivot = qualite_indiv(decoder_indiv(personnes->valeur));
        population habitant = personnes->suivant;
        population inf_pivot = NULL;
        population sup_pivot = NULL;

        for (int i = longueur_pop(personnes); i > 1; i--) {
            if (qualite_indiv(decoder_indiv(habitant->valeur)) < pivot) {
                inf_pivot = ajouter_pop_q(inf_pivot, habitant->valeur);
            }
            else {
                sup_pivot = ajouter_pop_q(sup_pivot, habitant->valeur);
            }
            habitant = habitant->suivant;
        }
        inf_pivot = trier_pop(inf_pivot);
        sup_pivot = trier_pop(sup_pivot);

        return enchainer_pop(enchainer_pop(sup_pivot, ajouter_pop_q(NULL, personnes->valeur)), inf_pivot);
    }
}
