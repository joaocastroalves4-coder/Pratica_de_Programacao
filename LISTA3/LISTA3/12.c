#include <stdio.h>
int calcularFrete( int codigoRegiao) {

    double frete;

    if (codigoRegiao == 1)
    {
    frete = 55;
    }
    
    else if (codigoRegiao == 2)
    {
    frete = 48.50;
    }
    
    else if (codigoRegiao == 3)
    {
    frete = 37.80;
    }
    
    else if (codigoRegiao == 4)
    {
    frete = 25;
    }
    
    else if (codigoRegiao == 5)
    {
    frete = 32.40;
    }
    
    else
    {
    frete = 0.0;
    }
    
    return frete;
}