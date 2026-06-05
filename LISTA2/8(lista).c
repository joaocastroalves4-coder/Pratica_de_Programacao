#include <stdio.h>
int main(){

    int anos, meses, dias, dias_por_ano, dias_por_mes, dias_totais;

    scanf("%d %d %d", &anos, &meses, &dias);

    dias_por_ano= anos * 360;
    dias_por_mes = meses * 30;
    dias_totais= dias + dias_por_mes + dias_por_ano;

    printf("Voce ja viveu %d dias", dias_totais);

    return 0;
}
