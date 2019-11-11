#include <stdlib.h>
#include "../structures/individu.h"
#include "longueur_indiv.h"

// ajoute un bit à un individu
individu ajouter_indiv_q(individu personne, Bit valeur) {
    individu nouv_bit = (individu)malloc(sizeof(bit));
    nouv_bit->valeur = valeur;
    nouv_bit->suivant = NULL;

    if (longueur_indiv(personne) == 0) {
        personne = nouv_bit;
    }
    else {
        individu temp = personne;

        for (int i = longueur_indiv(personne); i > 1; i--) {
            temp = temp->suivant;
        }
        temp->suivant = nouv_bit;
    }

    return personne;
}
