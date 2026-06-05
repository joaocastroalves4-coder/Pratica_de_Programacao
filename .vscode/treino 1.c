#include<stdio.h>

int soma(int a, int b) {

int soma = a + b;

return soma;
}

int main() {

    int A, B;

    scanf("%i %i", &A, &B);
    printf("%i", soma(A, B));

return 0;
}