#include <stdlib.h>
#include "../structures/individu.h"
#include "../structures/population.h"
#include "longueur_pop.h"

// ajoute un individu à une population
population ajouter_pop_q(population personnes, individu valeur) {
    population nouv_personne = (population)malloc(sizeof(personne));
    nouv_personne->valeur = valeur;
    nouv_personne->suivant = NULL;

    if (longueur_pop(personnes) == 0) {
        personnes = nouv_personne;
    }
    else {
        population temp = personnes;

        for (int i = longueur_pop(personnes) - 1; i > 0; i--) {
            temp = temp->suivant;
        }
        temp->suivant = nouv_personne;
    }

    return personnes;
}
