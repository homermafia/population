#include <stdlib.h>
#include "../structures/population.h"
#include "longueur_pop.h"
#include "ajouter_pop_q.h"
#include "habitant_num.h"

population selectionner_pop(population personnes, int tselect) {
    population nouv_pop = NULL;

    if (tselect == 0) {
        return nouv_pop;
    }
    else {
        int nb_habitant = longueur_pop(personnes);

        for (int i = 0; i < nb_habitant; i++) {
            if (i/tselect > 0) {
                nouv_pop = ajouter_pop_q(nouv_pop, habitant_num(nouv_pop, i%tselect + 1)->valeur);
            }
            else {
                nouv_pop = ajouter_pop_q(nouv_pop, personnes->valeur);
            }
            personnes = personnes->suivant;
        }

        return nouv_pop;
    }
}
