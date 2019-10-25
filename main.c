#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "initialiser_individu.h"



int main()
{
    srand(time());

    individu personne1 = initialiser_individu_iter(3);
    individu personne2 = initialiser_individu_recur(3);

    printf("%d\n%d\n", personne1->suivant == NULL, personne2->suivant == NULL);

    return 0;
}
