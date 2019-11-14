#include <stdlib.h>
#include "../structures/individu.h"

int longueur_indiv(individu personne) {
    int nombre = 0;

    while (personne != NULL) {
        nombre++;
        personne = personne->suivant;
    }

    return nombre;
}
