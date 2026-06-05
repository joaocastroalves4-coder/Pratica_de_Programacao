#include <stdio.h>
int main() {

    float n_trancamento, ira_atual;

    scanf("%f %f", &n_trancamento, &ira_atual);

    if (n_trancamento >= 2)
    {
    printf("Pedido de Trancamento Negado");

}
    else if (n_trancamento == 0 && ira_atual > 0 )
    {
    printf("Pedido de Trancamento Aprovado");

}
    else if (n_trancamento == 1 && ira_atual >= 2.5)
    {
    printf("Pedido de Trancamento Aprovado");

}
    else
    {
    printf("Pedido de Trancamento Negado");

}
    
    return 0;
}