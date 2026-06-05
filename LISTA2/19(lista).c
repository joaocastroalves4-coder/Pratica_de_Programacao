#include <stdio.h>
void conversao(int dias_totais) {

int meses, anos, dias_restantes;
    
    anos = dias_totais / 360;
    meses = dias_totais % 360 / 30;
    dias_restantes = dias_totais % 360 % 30;

    printf("%.001d ano(s), %.001d mes(es) e %d dia(s)\n", anos, meses, dias_restantes);

}
int main() {
    
    int n1, n2, n3;
    
    scanf("%d %d %d", &n1, &n2, &n3);

    conversao(n1); conversao(n2); conversao(n3);
    
    return 0;
}