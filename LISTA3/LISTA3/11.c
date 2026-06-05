#include <stdio.h>
int calcularTarifa(int diaDaSemana, int horas) {

    double valor;
    
    if (diaDaSemana == 1 || diaDaSemana == 7)
    {
    valor = horas * 8;
    }

    else if ( diaDaSemana >= 2 && diaDaSemana <= 6)
    {
    valor = horas * 5;
    }

    else
    {
    valor = 0.0;
    }  

    return valor; 
}