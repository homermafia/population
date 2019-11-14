#ifndef PARAM_QUALITE_H_INCLUDED
#define PARAM_QUALITE_H_INCLUDED

// Strucure qui permet de paramétrer le calcul de la qualité d'un individu. Les champs sont les suivants:

// char type_fonction: un caracère désignant le type de la fonction qui sera utilisé. Il peut être égale à:
// 's': fonction x^2
// 'l': fonction ln(x)
// 'c': fonction cos(x)

// double A: un parametre réel
// double B: un parametre réel
// int longIndiv: la longueur d'un individu

typedef struct param_qualite {
    char type_fonction;
    double A;
    double B;
    int longIndiv;
} param_qualite;

#endif // PARAM_QUALITE_H_INCLUDED
