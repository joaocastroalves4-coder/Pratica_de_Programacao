#include <stdio.h>
int analisarRisco(int pontuacao) {

    if (pontuacao <= 300 && pontuacao > 0)
    {
    return 4;
    }

    if (pontuacao > 800)
    {
    return 1;
    }
    
    if (pontuacao > 600)
    {
    return 2;
    }
    
    if (pontuacao > 300)
    {
    return 3;
    }
    
    else
    {
    return 0;
    }
}