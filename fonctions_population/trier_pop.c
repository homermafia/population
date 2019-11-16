#include <stdlib.h>

#include "../fonctions_individu/longueur_indiv.h"
#include "../fonctions_individu/qualite_indiv.h"

#include "../structures/population.h"
#include "ajouter_pop_q.h"
#include "longueur_pop.h"
#include "enchainer_pop.h"

#include "../structures/param_qualite.h"

population trier_pop(population personnes, param_qualite *parametres) {
    if (longueur_pop(personnes) == 0) {
        return NULL;
    }
    else {
        double pivot = qualite_indiv(personnes->valeur, parametres);
        population habitant = personnes->suivant;
        population inf_pivot = NULL;
        population sup_pivot = NULL;

        for (int i = longueur_pop(personnes); i > 1; i--) {
            if (qualite_indiv(habitant->valeur, parametres) < pivot) {
                inf_pivot = ajouter_pop_q(inf_pivot, habitant->valeur);
            }
            else {
                sup_pivot = ajouter_pop_q(sup_pivot, habitant->valeur);
            }
            habitant = habitant->suivant;
        }
        inf_pivot = trier_pop(inf_pivot, parametres);
        sup_pivot = trier_pop(sup_pivot, parametres);

        return enchainer_pop(enchainer_pop(sup_pivot, ajouter_pop_q(NULL, personnes->valeur)), inf_pivot);
    }
}
