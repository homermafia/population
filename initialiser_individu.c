#include "individu.h"

individu initialiser_individu_iter(int longIndiv) {

    individu personne;
    individu temp;
    for (int i = 0; i < longIndiv; i++) {
        individu *nouvel_indiv;
        nouvel_indiv = (individu)malloc(sizeof(bit));
        nouvel_indiv->valeur = rand()%2 + '0';
        nouvel_indiv->suivant = NULL;
        if (i == 0) {
            personne = nouvel_indiv;
            temp = personne;
        }
        else {
            temp->suivant = nouvel_indiv;
        }
        temp = temp->suivant;
    }
    return personne;
}

individu initialiser_individu_recur(int longIndiv) {
    individu nouvel_indiv;
    if (longIndiv == 1) {
        nouvel_indiv = (individu)malloc(sizeof(bit));
        nouvel_indiv->valeur = rand()%2 + '0';
    }
    else {
        nouvel_indiv = (individu)malloc(sizeof(bit));
        nouvel_indiv->valeur = rand()%2 + '0';
        initialiser_individu_recur(longIndiv - 1)->suivant = nouvel_indiv;
    }
    nouvel_indiv->suivant = NULL;
    return nouvel_indiv;
}
