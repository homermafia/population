#include <math.h>
#include "../fonctions_math/puissance.h"

double qualite_indiv(int valeur) {
    int A = -1, B = 1, longIndiv = 8;

    return -pow(((double)valeur/puissance(2, longIndiv))*(B - A) + A, 2);
}
