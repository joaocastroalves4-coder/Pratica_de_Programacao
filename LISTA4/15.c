int contarPares(int inicio, int fim) {

    int pares = 0;

    for (int i = fim; i >= inicio; i--) {

        if (i % 2 == 0) {

            pares++;
}
}

    return pares;
}