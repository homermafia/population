#include "../structures/population.h"

// Renvoie le ni�me habitant de la population pour n > 0 (attention ! ne contr�le pas la valeur de n par rapport � la taille de la population !)
population habitant_num(population personnes, int n) {
    for (int i = 1; i < n; i++) {
        personnes = personnes->suivant;
    }
    return personnes;
}
