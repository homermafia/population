#include <stdio.h>
#include <stdlib.h>
#include "individu.h"

individu initialiser_individu_iter(int longIndiv) {

    individu personne = NULL;
    individu temp;

    for (int i = 0; i < longIndiv; i++) {
        individu nouvel_indiv;
        nouvel_indiv = (individu)malloc(sizeof(bit));
        nouvel_indiv->valeur = rand()%2 + '0'; // faire ajouterq à la place lorsqu'on aura écrit la fonction
        nouvel_indiv->suivant = NULL;
        if (i == 0) {
            personne = nouvel_indiv;
        }
        else {
            temp->suivant = nouvel_indiv;
        }
        temp = nouvel_indiv;
    }
    return personne;
}

individu initialiser_individu_recur(int longIndiv) {

    individu nouvel_indiv;
    nouvel_indiv = (individu)malloc(sizeof(bit));
    nouvel_indiv->valeur = rand()%2 + '0'; // faire ajouterq à la place lorsqu'on aura écrit la fonction
    nouvel_indiv->suivant = NULL;

    if (longIndiv == 1) {
        return nouvel_indiv;
    }
    else {
        individu personne = initialiser_individu_recur(longIndiv - 1);
        individu temp = personne;

        while (temp->suivant != NULL) {
            temp = temp->suivant; // faire ajouterq à la place lorsqu'on aura écrit la fonction
        }
        temp->suivant = nouvel_indiv;

        return personne;
    }
}
