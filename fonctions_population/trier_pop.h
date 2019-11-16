#ifndef TRIER_POP_H_INCLUDED
#define TRIER_POP_H_INCLUDED
#include "../structures/population.h"
#include "../structures/param_qualite.h"

// Trie la une population selon la qualit�, qui sera calcul� en fonction des param�tres sp�cifi�s, de chaque indivu par odre d�croissant au moyen du quicksort.
population trier_pop(population, param_qualite*);

#endif // TRIER_POP_H_INCLUDED
