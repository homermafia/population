#include <stdio.h>

#include "structures/population.h"
#include "structures/param_qualite.h"

#include "fonctions_individu/decoder_indiv.h"
#include "fonctions_individu/qualite_indiv.h"

#include "fonctions_population/initialiser_pop.h"
#include "fonctions_population/longueur_pop.h"
#include "fonctions_population/croiser_pop.h"
#include "fonctions_population/trier_pop.h"
#include "fonctions_population/selectionner_pop.h"

void simuler_pop(int longIndiv, double pCroise, int TaillePop, int tSelect, int nGen, param_qualite parametres) {
    population pop = initialiser_pop_iter(TaillePop, longIndiv);

    for (int i = 0; i < nGen; i++) {
        pop = selectionner_pop(trier_pop(croiser_pop(pop, pCroise), &parametres), tSelect*longueur_pop(pop)/100);
        printf("Generation %d traitee. Population restante: %d\n", i + 1, longueur_pop(pop));
    }

    if (longueur_pop(pop) == 0) {
        printf("\nLa population a ete eteinte.");
    }
    else {
        printf("\nIl reste %d individus dans la population et le meilleur individu a pour valeur %d et a pour qualite %.2f", longueur_pop(pop), decoder_indiv(pop->valeur), qualite_indiv(pop->valeur, &parametres));
    }
}
