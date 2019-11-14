#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "structures/individu.h"
#include "structures/population.h"
#include "structures/param_qualite.h"

#include "fonctions_individu/initialiser_indiv.h"
#include "fonctions_individu/decoder_indiv.h"
#include "fonctions_individu/croiser_indiv.h"
#include "fonctions_individu/qualite_indiv.h"

#include "fonctions_population/initialiser_pop.h"
#include "fonctions_population/trier_pop.h"
#include "fonctions_population/selectionner_pop.h"

int main()
{
    srand(time(NULL));

    param_qualite parametre_carree = {
        .type_fonction = 's',
        .A = -1,
        .B = 1,
        .longIndiv = 8
    };

    population pop1 = initialiser_pop_iter(3, 8);
    population pop2 = initialiser_pop_recur(3, 8);

    individu personne1 = pop1->valeur, personne2 = pop1->suivant->valeur, personne3 = pop1->suivant->suivant->valeur;
    individu personne4 = pop2->valeur, personne5 = pop2->suivant->valeur, personne6 = pop2->suivant->suivant->valeur;
    individu personne7;

    printf("Parents:\n");
    printf("personne 1: %c%c%c%c %c%c%c%c\n", personne1->valeur, personne1->suivant->valeur, personne1->suivant->suivant->valeur, personne1->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne1->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 1: %d\n\n", decoder_indiv(personne1));

    printf("personne 2: %c%c%c%c %c%c%c%c\n", personne2->valeur, personne2->suivant->valeur, personne2->suivant->suivant->valeur, personne2->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne2->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 2: %d\n\n", decoder_indiv(personne2));

    personne7 = croiser_indiv(personne1, personne2, 0.5);

    printf("Enfant:\n");
    printf("personne 7: %c%c%c%c %c%c%c%c\n", personne7->valeur, personne7->suivant->valeur, personne7->suivant->suivant->valeur, personne7->suivant->suivant->suivant->valeur, personne7->suivant->suivant->suivant->suivant->valeur, personne7->suivant->suivant->suivant->suivant->suivant->valeur, personne7->suivant->suivant->suivant->suivant->suivant->suivant->valeur, personne7->suivant->suivant->suivant->suivant->suivant->suivant->suivant->valeur);
    printf("valeur personne 7: %d\n\n", decoder_indiv(personne7));

    printf("Avant tri:\n");
    printf("qualite personne 1: %.2f\n", qualite_indiv(personne1, &parametre_carree));
    printf("qualite personne 2: %.2f\n", qualite_indiv(personne2, &parametre_carree));
    printf("qualite personne 3: %.2f\n", qualite_indiv(personne3, &parametre_carree));
    printf("qualite personne 4: %.2f\n", qualite_indiv(personne4, &parametre_carree));
    printf("qualite personne 5: %.2f\n", qualite_indiv(personne5, &parametre_carree));
    printf("qualite personne 6: %.2f\n\n", qualite_indiv(personne6, &parametre_carree));

    pop1 = trier_pop(pop1, &parametre_carree);
    pop2 = trier_pop(pop2, &parametre_carree);

    personne1 = pop1->valeur;
    personne2 = pop1->suivant->valeur;
    personne3 = pop1->suivant->suivant->valeur;
    personne4 = pop2->valeur;
    personne5 = pop2->suivant->valeur;
    personne6 = pop2->suivant->suivant->valeur;

    printf("Apres tri:\n");
    printf("qualite personne 1: %.2f\n", qualite_indiv(personne1, &parametre_carree));
    printf("qualite personne 2: %.2f\n", qualite_indiv(personne2, &parametre_carree));
    printf("qualite personne 3: %.2f\n", qualite_indiv(personne3, &parametre_carree));
    printf("qualite personne 4: %.2f\n", qualite_indiv(personne4, &parametre_carree));
    printf("qualite personne 5: %.2f\n", qualite_indiv(personne5, &parametre_carree));
    printf("qualite personne 6: %.2f\n\n", qualite_indiv(personne6, &parametre_carree));

    pop1 = selectionner_pop(pop1, 2);
    pop2 = selectionner_pop(pop2, 2);

    personne1 = pop1->valeur;
    personne2 = pop1->suivant->valeur;
    personne3 = pop1->suivant->suivant->valeur;
    personne4 = pop2->valeur;
    personne5 = pop2->suivant->valeur;
    personne6 = pop2->suivant->suivant->valeur;

    printf("Apres selection:\n");
    printf("qualite personne 1: %.2f\n", qualite_indiv(personne1, &parametre_carree));
    printf("qualite personne 2: %.2f\n", qualite_indiv(personne2, &parametre_carree));
    printf("qualite personne 3: %.2f\n", qualite_indiv(personne3, &parametre_carree));
    printf("qualite personne 4: %.2f\n", qualite_indiv(personne4, &parametre_carree));
    printf("qualite personne 5: %.2f\n", qualite_indiv(personne5, &parametre_carree));
    printf("qualite personne 6: %.2f\n\n", qualite_indiv(personne6, &parametre_carree));

    return 0;
}
