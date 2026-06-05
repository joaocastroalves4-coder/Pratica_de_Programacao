#include <stdio.h>
int main() {

    float Tecnica, Gestao, Apresentacao;

    scanf("%f %f %f", &Tecnica, &Gestao, &Apresentacao);

    if (Tecnica >= 6 && Gestao >= 5 && Apresentacao >= 7) {
    
    printf("Grupo Aprovado!");
}
    else {
    
    printf("Grupo Reprovado.");
}
    return 0;
}