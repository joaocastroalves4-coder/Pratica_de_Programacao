int contarPicos(int valores[], int n) {
    int cont = 0;

    if (n < 3)
        return 0;

    for (int i = 1; i < n - 1; i++) {
        if (valores[i] > valores[i - 1] && valores[i] > valores[i + 1]) {
            cont++;
        }
    }

    return cont;
}
