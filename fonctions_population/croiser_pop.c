#include <stdlib.h>

#include "../structures/individu.h"
#include "../fonctions_individu/croiser_indiv.h"

#include "../structures/population.h"
#include "ajouter_pop_q.h"
#include "longueur_pop.h"
#include "habitant_num.h"

// Enlève l'habitant se trouvant à une certaine position dans la population.
population enlever_hab(population personnes, int num_habitant) {
    if (num_habitant == 1) {
        personnes = personnes->suivant;
    }
    else {
        habitant_num(personnes, num_habitant - 1)->suivant = habitant_num(personnes, num_habitant + 1);
    }
    return personnes;
}

population croiser_pop(population personnes, int pCroise) {
    population nouvelle_pop = NULL;

    for (int i = 1; i < longueur_pop(personnes)/2; i++) {
        individu personne1, personne2;

        int num_hab1 = 1 + rand()%(longueur_pop(personnes));
        personne1 = habitant_num(personnes, num_hab1)->valeur;
        personnes = enlever_hab(personnes, num_hab1);

        int num_hab2 = 1 + rand()%(longueur_pop(personnes));
        personne2 = habitant_num(personnes, num_hab2)->valeur;
        personnes = enlever_hab(personnes, num_hab2);

        nouvelle_pop = ajouter_pop_q(nouvelle_pop, croiser_indiv(personne1, personne2, pCroise));
    }

    return nouvelle_pop;
}
