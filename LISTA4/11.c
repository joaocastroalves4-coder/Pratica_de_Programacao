#include <stdio.h>
int main() {

    int N;
    char atual, anterior;
    int contador = 0;

    scanf("%d", &N);

    scanf(" %c", &anterior);
    contador = 1;

    for (int i = 1; i < N; i++) {
    scanf(" %c", &atual);

    if (atual == anterior) {
    contador++;   
    }

    else {
    printf("%c%d", anterior, contador);

    anterior = atual;
    contador = 1;
    }
    
}
    printf("%c%d", anterior, contador);   

    return 0;
}