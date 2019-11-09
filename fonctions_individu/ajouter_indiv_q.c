#include <stdlib.h>
#include "../structures/individu.h"
#include "longueur_indiv.h"

// ajoute un bit à un individu
individu ajouter_indiv_q(individu personne, Bit valeur) {
    individu nouv_indiv = (individu)malloc(sizeof(bit));
    nouv_indiv->valeur = valeur;
    nouv_indiv->suivant = NULL;

    if (longueur_indiv(personne) == 0) {
        personne = nouv_indiv;
    }
    else {
        individu temp = personne;

        for (int i = longueur_indiv(personne) - 1; i > 0; i--) {
            temp = temp->suivant;
        }
        temp->suivant = nouv_indiv;
    }

    return personne;
}
