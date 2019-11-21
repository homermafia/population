#ifndef SIMULER_POP_H_INCLUDED
#define SIMULER_POP_H_INCLUDED
#include "structures/param_qualite.h"

// Débute la simulation de la population. La fonction prend six arguments:
// int longIdiv: Nombre de bits que composent chaque individus
// double pCroise: la probabilté pour chaque nouveau individu former à partir de deux individus d'hériter du premier individu (0 <= pCroise <= 1)
// int TaillePop: Nombre d'individus dans la population
// int tSelect: Taux de sélection de la population après un croisement (0 <= tSelect <= 100)
// int nGen: Nombre de générations
// param_qualite parametres: les paramètres de calcul de la qualité d'un individu, qui sont demandés lors du lancement du programme (voir fichier structure param_qualite.h pour plus d'inforamtions)
void simuler_pop(int, double, int, int, int, int, param_qualite);

#endif // SIMULER_POP_H_INCLUDED
