#include <stdio.h>
#include <stdlib.h>

#include "structures/population.h"
#include "structures/param_qualite.h"

#include "fonctions_individu/decoder_indiv.h"
#include "fonctions_individu/qualite_indiv.h"

#include "fonctions_population/initialiser_pop.h"
#include "fonctions_population/croiser_pop.h"
#include "fonctions_population/trier_pop.h"
#include "fonctions_population/selectionner_pop.h"

void simuler_pop(int longIndiv, double pCroise, int TaillePop, int tSelect, int nGen, param_qualite parametres) {
    population pop = initialiser_pop_iter(TaillePop, longIndiv);

    for (int i = 0; i < nGen; i++) {
        pop = croiser_pop(pop, pCroise);
        pop = trier_pop(pop, &parametres);
        pop = selectionner_pop(pop, tSelect);
    }

    printf("Le meilleur individu de la population a pour valeur %d et a pour qualite %.2f", decoder_indiv(pop->valeur), qualite_indiv(pop->valeur, &parametres));
}
