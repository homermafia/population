#include <stdlib.h>
#include "../structures/population.h"
#include "longueur_pop.h"
#include "queue_pop.h"

population enchainer_pop(population p1, population p2) {
    if (longueur_pop(p1) == 0) {
        return p2;
    }
    else {
        queue_pop(p1)->suivant = p2;
        return p1;
    }
}
