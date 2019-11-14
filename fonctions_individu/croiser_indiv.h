#ifndef CROISER_INDIV_H_INCLUDED
#define CROISER_INDIV_H_INCLUDED
#include "../structures/individu.h"

// Créé un nouvel individu héritant des bits des deux individus donnés, selon la probabilité donnée PCroise que le bit soit hérité du premier individu.
// (0 <= pCroise <= 1)
individu croiser_indiv(individu, individu, double);

#endif // CROISER_INDIV_H_INCLUDED
