#ifndef INDIVIDU_H_INCLUDED
#define INDIVIDU_H_INCLUDED

typedef unsigned char Bit;

typedef struct bit {
    Bit valeur;
    struct bit *suivant;
} bit;
typedef bit *individu;


#endif // INDIVIDU_H_INCLUDED
