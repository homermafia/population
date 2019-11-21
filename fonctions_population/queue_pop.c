#include "../structures/population.h"
#include "longueur_pop.h"
#include "habitant_num.h"

population queue_pop(population personnes) {
    return habitant_num(personnes, longueur_pop(personnes));
}
