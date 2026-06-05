#include <stdio.h>
int main () {

    float conta, porcentagem, valor_gorjeta, valor_total;

    scanf("%f %f", &conta, &porcentagem);

    valor_gorjeta= conta * porcentagem / 100;
    valor_total= (conta * porcentagem / 100) + conta;

    printf("Valor da gorjeta: R$%.2f\nValor total: R$%.2f", valor_gorjeta, valor_total);

    return 0;  
}