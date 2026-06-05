#include <stdio.h>
int main() {

    int pressao, saturacao;
    float temperatura;
    
    scanf("%f %d %d", &temperatura, &pressao, &saturacao);

    if (saturacao < 90 || pressao < 80)
    {
    printf("Classificacao de Risco: VERMELHO");
    }
    
    else if (temperatura > 39 || pressao > 180)
    {
    printf("Classificacao de Risco: LARANJA");
    }
    
    else if (temperatura <= 39 && temperatura >= 38)
    {
    printf("Classificacao de Risco: AMARELO");
    }
    
    else
    {
    printf("Classificacao de Risco: VERDE");
    }
}