#include <stdio.h>
int main() {

    float peso, altura, imc;

    printf ("Insira seu peso: ");
    scanf("%f", &peso);

    printf ("Insira sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC: %.2f", imc);

return 0;
}