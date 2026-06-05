#include <stdio.h>
int main () {

    float custo_total, guardado, meses_restantes;
    
    scanf("%f %f %f", &custo_total, &guardado, &meses_restantes);
    
    printf("Voce precisa economizar R$%.2f por mes",(custo_total - guardado) / meses_restantes);

    return 0;
}