#ifndef SIMULER_POP_H_INCLUDED
#define SIMULER_POP_H_INCLUDED
#include "structures/param_qualite.h"

// D�bute la simulation de la population. La fonction prend six arguments:
// int longIdiv: Nombre de bits que composent chaque individus
// double pCroise: la probabilt� pour chaque nouveau individu former � partir de deux individus d'h�riter du premier individu (0 <= pCroise <= 1)
// int TaillePop: Nombre d'individus dans la population
// int tSelect: Taux de s�lection de la population apr�s un croisement (0 <= tSelect <= 100)
// int nGen: Nombre de g�n�rations
// param_qualite parametres: les param�tres de calcul de la qualit� d'un individu, qui sont demand�s lors du lancement du programme (voir fichier structure param_qualite.h pour plus d'inforamtions)
void simuler_pop(int, double, int, int, int, int, param_qualite);

#endif // SIMULER_POP_H_INCLUDED
