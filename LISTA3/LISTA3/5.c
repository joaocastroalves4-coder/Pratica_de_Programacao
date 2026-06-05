#include <stdio.h>
int verificarElegibilidade(int idade, double peso, int mesesUltimaTatuagem) {

    if (idade < 0 || peso < 0 || mesesUltimaTatuagem < 0) {
        
    return 0;
}

    if (idade < 18 || idade > 69) {
        
    return 1;
}

    if (peso < 50.0) {
        
    return 2;
}

    if (mesesUltimaTatuagem < 12) {

    return 3;
}
    
    return 4;
}