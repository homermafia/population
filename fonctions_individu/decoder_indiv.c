#include "../structures/individu.h"
#include "longueur_indiv.h"
#include "../fonctions_math/puissance.h"

unsigned long long decoder_indiv(individu personne) {
    unsigned long long somme = 0;

    for (int i = longueur_indiv(personne) - 1; i >= 0; i--) {
        somme += (personne->valeur - '0')*puissance(2, i);
        personne = personne->suivant;
    }

    return somme;
}
