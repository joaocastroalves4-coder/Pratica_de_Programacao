#include <stdio.h>

int main() {
    char tipoVeiculo;
    int eixos;
    double valor;

    scanf(" %c %d", &tipoVeiculo, &eixos);

    if (tipoVeiculo == 'M') {
        valor = 3.00;
    } 
    else if (tipoVeiculo == 'P') {
        valor = 4.50 * eixos;
        valor = valor * 0.95; 
    } 
    else if (tipoVeiculo == 'C') {
        valor = 4.50 * eixos;
        valor = valor * 1.10;
    } 
    else {
        printf("Tipo de veículo inválido.\n");
        return 0;
    }

    printf("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}
