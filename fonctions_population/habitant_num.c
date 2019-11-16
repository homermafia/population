#include "../structures/population.h"

population habitant_num(population personnes, int n) {
    for (int i = 1; i < n; i++) {
        personnes = personnes->suivant;
    }
    return personnes;
}
