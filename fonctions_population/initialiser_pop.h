#ifndef INITIALISER_POP_H_INCLUDED
#define INITIALISER_POP_H_INCLUDED
#include "../structures/population.h"

// Initialise une population compos�e d'un nombre donn� d'individus alatoires compos�s d'un nombre donn� de bits de mani�re it�rative.
population initialiser_pop_iter(int, int);

// Initialise une population compos�e d'un nombre donn� d'individus alatoires compos�s d'un nombre donn� de bits de mani�re r�cursive.
population initialiser_pop_recur(int, int);

#endif // INITIALISER_POP_H_INCLUDED
