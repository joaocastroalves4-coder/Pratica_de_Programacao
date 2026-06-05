#include <stdio.h>
int main() {

    int N;
    int fatorial = 1;

    scanf("%i", &N);

    for (int i = 1; i <= N; i++) {

    fatorial = fatorial * i;

    }
    
    printf("Fatorial de %i: %i", N, fatorial);

    return 0;
}