#include <math.h>
#include "../fonctions_math/puissance.h"

#include "../structures/individu.h"
#include "decoder_indiv.h"
#include "longueur_indiv.h"

#include "../structures/param_qualite.h"

double qualite_indiv(individu personne, param_qualite *parametres) {
    double qualite;
    double X = ((double)decoder_indiv(personne)/puissance(2, longueur_indiv(personne)))*(parametres->B - parametres->A) + parametres->A;

    switch (parametres->type_fonction) {
        case 's' :
            qualite = -pow(X, 2);
            break;
        case 'l' :
            qualite =  -log(X);
            break;
        case 'c' : qualite = -cos(X);
            break;
    }

    return qualite;
}
