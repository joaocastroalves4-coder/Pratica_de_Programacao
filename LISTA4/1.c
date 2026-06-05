#include <stdio.h>
int main() {

    int N_de_pecas, i;
    double peso;

    scanf("%d", &N_de_pecas);

    for (i = 0; i < N_de_pecas; i++) {
        scanf("%lf", &peso);

        if (peso < 100.0 || peso > 110.0) {
        printf("Lote REPROVADO\n");
        
        return 0;
        }
    }

    printf("Lote APROVADO\n");
    
    return 0;
}