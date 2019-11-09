#include "../structures/individu.h"
#include "longueur_indiv.h"
#include "../fonctions_math/puissance.h"

// donne la valeur en base 10 de la personne grâce à sa séquence de bits
int decoder_indiv(individu personne) {
    int somme = 0;

    for (int i = longueur_indiv(personne) - 1; i >= 0; i--) {
        somme += (personne->valeur - '0')*puissance(2, i);
        personne = personne->suivant;
    }

    return somme;
}
