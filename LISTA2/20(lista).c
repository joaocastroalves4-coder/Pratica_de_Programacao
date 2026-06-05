#include <stdio.h>
void peso_ideal(float altura) {

int homem, mulher;

    homem = altura * 72.7 - 58;
    mulher = altura * 62.1 - 44.7;

    printf("%.2d %.2d", homem, mulher);
}
int main() {

    float alt;

    scanf("%f", &alt);

    peso_ideal(alt);

    return 0;
}