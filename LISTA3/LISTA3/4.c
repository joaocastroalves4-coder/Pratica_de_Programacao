#include <stdio.h>
int main () {

    int creditos_obri, creditos_opta;

    scanf("%d %d", &creditos_obri, &creditos_opta);

    if (creditos_obri >= 130 &&  creditos_opta >= 40 && creditos_obri + creditos_opta >= 200)
    {
    printf("Apto para formatura!");
    
}
    else if (creditos_obri < 130)
    {
    printf("Creditos obrigatorios insuficientes.");

}
    else if (creditos_opta < 40)
    {
    printf("Creditos optativos insuficientes.");

}
   else if (creditos_obri + creditos_opta < 200)
    {
    printf("Total de creditos insuficiente.");

}
    return 0;
}