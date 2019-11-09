#include <stdlib.h>
#include "../structures/individu.h"

// compte le nombre de bits dans un individu
int longueur_indiv(individu personne) {
    int nombre = 0;

    while (personne != NULL) {
        nombre++;
        personne = personne->suivant;
    }

    return nombre;
}
