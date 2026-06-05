#include <stdio.h>
int main() {

    float nota;
    int aprovados = 0, reprovados = 0;

    scanf("%f", &nota);

    while (nota >= 0) {

        if (nota >= 5.0) {
            aprovados++;
        } else {
            reprovados++;
        }

        scanf("%f", &nota);
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    return 0;
}