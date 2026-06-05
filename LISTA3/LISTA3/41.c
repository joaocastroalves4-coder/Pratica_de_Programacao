#include <stdio.h>
int calcularPrecoIngresso(int idade, int ehEstudante) {

    double valor;

    if (idade < 12)
    {
    valor = 15;
    }
    
    else if (idade >=60)
    {
    valor = 20;
    }
    
    else if (idade >= 12 && idade < 60 && ehEstudante == 1)
    {
    valor = 25;
    }
    
    else if (idade <= 0)
    {
    valor = 0;
    }

    else
    {
    valor = 30;
    }
    
    return valor;
}