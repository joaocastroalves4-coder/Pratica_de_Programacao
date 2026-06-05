#include <stdio.h>
int main() {
    int N;
    int soma = 0;

    scanf("%d", &N);

    for (int i = 1; i < N; i++) {

        if (N % i == 0) {
            
        soma += i;

        }
    }
        if (soma == N)
        {
        printf("O numero %i e Perfeito", N);
        }
        else if (soma > N)
        {
        printf("O numero %i e Abundante", N);
        }
        else
        {
        printf("O numero %i e Deficiente", N);
        }

    return 0; 
}