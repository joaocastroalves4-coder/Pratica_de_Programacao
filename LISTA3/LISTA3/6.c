#include <stdio.h>
int verificarsituacao(double nota, double frequencia) {

    if (nota >= 6 && frequencia >= 75) {
   
    return 1;
}
    if (frequencia < 75) {
   
    return 2;
}
    if (nota >= 4 && nota < 6 && frequencia >= 75) {
    
    return 3;
}
    if (nota < 4 && frequencia >= 75) {
    
    return 4;
}  
}