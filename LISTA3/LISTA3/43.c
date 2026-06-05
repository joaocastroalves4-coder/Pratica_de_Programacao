#include <stdio.h>
int main() {

    char categoria;

    scanf("%c", &categoria);

    if (categoria == 'E')
    {
    printf("Valor a pagar: R$ 5.00");
    }
    
    else if (categoria == 'S')
    {
    printf("Valor a pagar: R$ 15.00");
    }

    else if (categoria == 'V')
    {
    printf("Valor a pagar: R$ 20.00");
    }
    
    else
    {
    printf("Categoria invalida");
    }
    
    return 0;
}