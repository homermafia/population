#include <stdlib.h>
#include "../structures/population.h"

// compte le nombre d'individus dans une population
int longueur_pop(population personnes) {
    int nombre = 0;

    while (personnes != NULL) {
        nombre++;
        personnes = personnes->suivant;
    }

    return nombre;
}
