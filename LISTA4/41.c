#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N <= 2) {
        printf("SIM\n");
        return 0;
    }

    int anterior, atual;
    int direcao = 0;  

    scanf("%d", &anterior);

    for (int i = 1; i < N; i++) {
        scanf("%d", &atual);

        if (atual == anterior) {
            printf("NAO\n"); 
            return 0;
        }

        int novaDirecao = (atual > anterior) ? 1 : -1;

        if (direcao == 0) {
            direcao = novaDirecao; 
        } else {
            if (novaDirecao == direcao) {

                printf("NAO\n");
                return 0;
            }
            direcao = novaDirecao;  
        }

        anterior = atual; 
    }

    printf("SIM\n");
    return 0;
}
