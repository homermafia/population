unsigned long long puissance(int x, int n) {
    unsigned long long resultat = 1;

    for (int i = 0; i < n; i++) {
        resultat = resultat*x;
    }

    return resultat;
}
