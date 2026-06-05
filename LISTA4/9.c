#include <stdio.h>

int main() {

    int N;
    char A;
    int vogais = 0, consoantes = 0, digitos = 0, outros = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {

        scanf(" %c", &A);

        if ((A >= 'A' && A <= 'Z') || (A >= 'a' && A <= 'z')) {

            if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' ||
                A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U') {
                vogais++;
            } else {
                consoantes++;
            }
        }

        else if (A >= '0' && A <= '9') {
            digitos++;
        }

        else {
            outros++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);
    printf("Digitos: %d\n", digitos);
    printf("Outros: %d\n", outros);

    return 0;
}
