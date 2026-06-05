#include <stdio.h>
int main() {

    int segundos_totais, HH, MM, SS;
    
    scanf("%d", &segundos_totais);

    HH = segundos_totais / 3600;
    MM = (segundos_totais % 3600) / 60;
    SS = segundos_totais % 60;

    printf("%dh %02dm %02ds", HH, MM, SS);

    return 0;
}