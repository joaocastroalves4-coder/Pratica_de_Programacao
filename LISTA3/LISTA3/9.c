#include <stdio.h>
double calcularBonus( double valorVendas, int metasBatidas) {

    if (valorVendas < 0 || metasBatidas < 0) {

    return 0.0;
} 
    if (valorVendas > 50000 && metasBatidas > 3 ) {

    return valorVendas * 0.15;
}
    if (valorVendas > 50000 && metasBatidas <= 3 ) {

    return valorVendas * 0.10;
}
    if (valorVendas <= 50000 && valorVendas > 25000 && metasBatidas <= 3) {
    
    return valorVendas * 0.05;
}
    if (valorVendas <= 50000 && valorVendas > 25000 && metasBatidas > 3) {
    
    return valorVendas * 0.07;
}
    else {

    return valorVendas = 0;
}    
}