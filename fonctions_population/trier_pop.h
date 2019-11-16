#ifndef TRIER_POP_H_INCLUDED
#define TRIER_POP_H_INCLUDED
#include "../structures/population.h"
#include "../structures/param_qualite.h"

// Trie la une population selon la qualité, qui sera calculé en fonction des paramètres spécifiés, de chaque indivu par odre décroissant au moyen du quicksort.
population trier_pop(population, param_qualite*);

#endif // TRIER_POP_H_INCLUDED
