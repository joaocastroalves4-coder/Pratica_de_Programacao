#include <stdio.h> 
int main () {

    int galeao, sicle, nuques, conversao_galeao_pra_nuques, conversao_sicle_pra_nuques;

    scanf("%d %d %d", &galeao, &sicle, &nuques);
    
    conversao_galeao_pra_nuques = galeao * 17 * 29;
    conversao_sicle_pra_nuques = sicle * 29;

    printf("O bruxo possui %d Nuques", conversao_galeao_pra_nuques + conversao_sicle_pra_nuques + nuques);

    return 0;    
}