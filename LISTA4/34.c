#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int ehPrimo = 1;

    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            ehPrimo = 0; 
            break;     
        }
    }

    if (ehPrimo)
        printf("%d eh primo\n", N);
    else
        printf("%d nao eh primo\n", N);

    return 0;
}
