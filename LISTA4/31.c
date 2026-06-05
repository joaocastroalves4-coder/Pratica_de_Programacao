#include <stdio.h>

int main() {
    int n;
    int soma = 0;
    int cont = 0;

    while (1) {
        scanf("%d", &n);

        if (n == 0) {
            break;  
        }

        if (n % 2 == 0) {   
            soma += n;
            cont++;
        }
    }

    if (cont == 0) {
        printf("Nenhum numero par\n");
    } else {
        double media = (double)soma / cont;
        printf("Media dos pares: %.2f\n", media);
    }

    return 0;
}
