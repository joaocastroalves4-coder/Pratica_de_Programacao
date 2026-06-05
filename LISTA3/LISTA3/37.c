#include <stdio.h>
int main() {

    int codigo;

    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
    printf("Valor a pagar: R$ 5.00");
    break;
    
    case 2:
    printf("Valor a pagar: R$ 8.50");
    break;
        
    case 3:
    printf("Valor a pagar: R$ 9.00");
    break;

    case 4:
    printf("Valor a pagar: R$ 6.00");
    break;

    default: printf("Opcao invalida");
    }
}
