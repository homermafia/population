#include <stdio.h>
#include <stdlib.h>
#include "../structures/individu.h"

// ajoute un bit à un individu
individu ajouter_indiv_q(individu personne, Bit valeur) {
    individu nouv_indiv = (individu)malloc(sizeof(bit));
    nouv_indiv->valeur = valeur;
    nouv_indiv->suivant = NULL;

    if (personne == NULL) {
        personne = nouv_indiv;
    }
    else {
        individu temp = personne;

        while (temp->suivant != NULL) {
            temp = temp->suivant;
        }
        temp->suivant = nouv_indiv;
    }

    return personne;
}
