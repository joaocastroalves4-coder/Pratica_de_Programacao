int calcularBonus(int pontuacoes[], int n) {

    int soma = 0;

    for (int i = 0; i < n; i++) {

    if (pontuacoes[i] > 1000) {
    
    soma = soma + 50;
}
}

    return soma;
}