#include <stdio.h>
int validarForcaSenha(int comprimento) {
    
    if (comprimento >= 12)
    {
    return 4;
    }
    
    else if (comprimento >= 8)
    {
    return 3;
    }
    
    else if (comprimento >= 6)
    {
    return 2;
    }
    
    else if (comprimento < 6 && comprimento > 0)
    {
    return 1;
    }
    
    else
    {
    return 0;
    }
}