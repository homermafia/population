#include <stdlib.h>
#include "../structures/population.h"

int longueur_pop(population personnes) {
    int nombre = 0;

    while (personnes != NULL) {
        nombre++;
        personnes = personnes->suivant;
    }

    return nombre;
}
