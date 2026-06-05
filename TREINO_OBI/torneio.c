#include <stdio.h>

int calculo_de_vitorias(int numero_de_jogos) {
    int vitorias = 0;

    for (int i = 0; i < numero_de_jogos; i++) {
        char resultado;
        scanf(" %c", &resultado);
        if (resultado == 'V') {
            vitorias++;
        }
    }

    return vitorias;
}

int main() {
    int numero_de_jogos;
    scanf("%d", &numero_de_jogos);

    int vitorias = calculo_de_vitorias(numero_de_jogos);

    if (vitorias >= 5)       printf("1");
    else if (vitorias >= 3)  printf("2");
    else if (vitorias >= 1)  printf("3");
    else                     printf("-1");

    return 0;
}