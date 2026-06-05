#include <stdio.h>
void funcaoeleicao() {

    int eleitores, votos;
    int cand1 = 0, cand2 = 0, cand3 = 0, nulos = 0;

    scanf("%d", &eleitores);

    for (int i = 0; i < eleitores; i++) {

        scanf("%d", &votos);

        if (votos == 1)
            cand1++;
        else if (votos == 2)
            cand2++;
        else if (votos == 3)
            cand3++;
        else
            nulos++;
    }

    printf("Candidato 1: %d\n", cand1);
    printf("Candidato 2: %d\n", cand2);
    printf("Candidato 3: %d\n", cand3);
    printf("Nulos: %d\n", nulos);
}

int main() {

    funcaoeleicao();

    return 0;
}