// Calcule x^n de mani�re r�cursive pour n >= 0

int puissance(int x, int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return puissance(x, n - 1)*x;
    }
}
