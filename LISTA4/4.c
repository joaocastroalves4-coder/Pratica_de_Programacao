#include <stdio.h>
int main() {

    int N;

    do {
    scanf("%i", &N);

    } while (N > 10 || N < 0);
    
    printf("Nota valida: %i", N);
    return 0;
}