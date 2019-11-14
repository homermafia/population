#ifndef INITIALISER_POP_H_INCLUDED
#define INITIALISER_POP_H_INCLUDED
#include "../structures/population.h"

// Initialise une population composée d'un nombre donné d'individus alatoires composés d'un nombre donné de bits de manière itérative.
population initialiser_pop_iter(int, int);

// Initialise une population composée d'un nombre donné d'individus alatoires composés d'un nombre donné de bits de manière récursive.
population initialiser_pop_recur(int, int);

#endif // INITIALISER_POP_H_INCLUDED
