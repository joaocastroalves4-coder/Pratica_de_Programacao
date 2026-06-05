#include <stdio.h>
int verificarAcesso(int idade, int temVip, int acompanhado) {
    if (temVip == 1) {
        return 1;
    } 
    else if (idade >= 18) {
        return 1;
    } 
    else if (idade < 18 && acompanhado == 1) {
        return 1;
    } 
    else {
        return 0;
}
}