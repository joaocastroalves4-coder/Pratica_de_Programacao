#include <stdio.h>
int main () {

    int ano;

    scanf("%i", &ano);

    if (ano % 4 == 0 && ano % 100 != 0)
    {
    printf("Bissexto");

}
    else if (ano % 4 == 0 && ano % 100 == 0 && ano % 400 == 0)
    {
    printf("Bissexto");

}
    else
    {
    printf("Nao Bissexto");

}
   
return 0;
}