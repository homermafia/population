#ifndef CROISER_INDIV_H_INCLUDED
#define CROISER_INDIV_H_INCLUDED
#include "../structures/individu.h"

// Cr�� un nouvel individu h�ritant des bits des deux individus donn�s, selon la probabilit� donn�e PCroise que le bit soit h�rit� du premier individu.
// (0 <= pCroise <= 1)
individu croiser_indiv(individu, individu, double);

#endif // CROISER_INDIV_H_INCLUDED
