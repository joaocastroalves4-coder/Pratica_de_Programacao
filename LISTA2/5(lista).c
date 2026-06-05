#include <stdio.h> 
int main() {

    int n_descargas, n_chuveiro, n_torneira;

    scanf("%d\n%d\n%d", &n_descargas, &n_chuveiro, &n_torneira);

    printf("Você economizou %d litros de água", n_descargas * 12 + n_chuveiro * 9 + n_torneira * 2);

    return 0;
}