#ifndef POPULATION_H_INCLUDED
#define POPULATION_H_INCLUDED
#include "individu.h"

typedef struct personne {
    individu valeur;
    struct personne *suivant;
} personne;
typedef personne *population;

#endif // POPULATION_H_INCLUDED
