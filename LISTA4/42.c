#include <stdio.h>

int main() {

    int N;
    int par = 0, impar = 0;

    scanf("%d", &N);

    int temp = N;

    for (; temp > 0; temp = temp / 10) {

        int digito = temp % 10;
        
        if (digito % 2 == 0) {
            par += digito;
        } else {
            impar += digito;
        }
    }

    printf("Soma Pares: %d\n", par);
    printf("Soma Impares: %d\n", impar);

    return 0;
}