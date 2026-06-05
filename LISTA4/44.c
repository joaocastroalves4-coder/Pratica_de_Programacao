#include <stdio.h>
int main() {

    int N;
    scanf("%i", &N);

    int soma = 0;

    for (int i = 0; i <= N; i++)
    {

    soma = ((1 + N) * N) / 2;
}
    
    printf("Soma: %i", soma);

    return 0;
}