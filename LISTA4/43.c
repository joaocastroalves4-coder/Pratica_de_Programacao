#include <stdio.h>
int main() {

    int N;
    int soma = 0;

    do {
        scanf("%d", &N);

        if (N > 0) {
        
        soma += N;
        }

    } while (N != 0);

    printf("Soma: %d\n", soma);

    return 0;
}