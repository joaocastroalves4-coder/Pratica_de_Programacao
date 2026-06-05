#include <stdio.h>

int main() {
    float nota;
    float soma = 0.0;
    int contador = 0;

    scanf("%f", &nota);

    while (nota >= 0) {
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            contador++;
        }
        scanf("%f", &nota);
    }

    if (contador == 0) {
        printf("Nenhuma nota valida.\n");
    } else {
        float media = soma / contador;
        printf("Media: %.2f\n", media);
    }

    return 0;
}
