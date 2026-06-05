#include <stdio.h>
int calcularBonusJogo(int tempoRestantes, int segredosEncontrados) {

    if (tempoRestantes > 120 && segredosEncontrados >= 3)
    {
    return 4;
    }

    else if (tempoRestantes > 60 && segredosEncontrados >= 2)
    {
    return 3;
    }
    
    else if (tempoRestantes < 0 || segredosEncontrados < 0)
    {
    return 0;
    }
    
    else if (tempoRestantes > 0 || segredosEncontrados >= 1 )
    {
    return 2;
    
    }
    else if (segredosEncontrados >= 1)
    {
    return 2;
    }
    
    else
    {   
    return 1;
    }
}