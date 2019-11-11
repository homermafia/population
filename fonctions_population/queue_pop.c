#include "../structures/population.h"
#include "longueur_pop.h"

// Revoie le dernier habitant d'une population
population queue_pop(population personnes) {
    for (int i = longueur_pop(personnes); i > 1; i--) {
        personnes = personnes->suivant;
    }
    return personnes;
}
