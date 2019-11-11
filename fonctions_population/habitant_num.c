#include "../structures/population.h"

// Renvoie le nième habitant de la population pour n > 0 (attention ! ne contrôle pas la valeur de n par rapport à la taille de la population !)
population habitant_num(population personnes, int n) {
    for (int i = 1; i < n; i++) {
        personnes = personnes->suivant;
    }
    return personnes;
}
