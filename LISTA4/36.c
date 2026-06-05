#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int passos = 0;
    int pico = N;
    int atual = N;

    for (;;) {

        if (atual == 1) {
            break; 

        if (atual % 2 == 0) {
            atual = atual / 2;
        } else {
            atual = 3 * atual + 1;
        }

        if (atual > pico) {
            pico = atual;
        }

        passos++;
    }

    printf("Passos: %d\n", passos);
    printf("Pico: %d\n", pico);

    return 0;
}
