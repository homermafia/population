#ifndef PARAM_QUALITE_H_INCLUDED
#define PARAM_QUALITE_H_INCLUDED

// Strucure qui permet de param�trer le calcul de la qualit� d'un individu. Les champs sont les suivants:

// char type_fonction: un carac�re d�signant le type de la fonction qui sera utilis�. Il peut �tre �gale �:
// 's': fonction x^2
// 'l': fonction ln(x)
// 'c': fonction cos(x)

// double A: un parametre r�el
// double B: un parametre r�el
// int longIndiv: la longueur d'un individu

typedef struct param_qualite {
    char type_fonction;
    double A;
    double B;
    int longIndiv;
} param_qualite;

#endif // PARAM_QUALITE_H_INCLUDED
