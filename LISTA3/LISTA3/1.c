#include <stdio.h>
int main () {

    float pH, umidade_solo;

    scanf("%f\n%f", &pH, &umidade_solo);

    if (pH >= 6 && pH <= 7 && umidade_solo >= 60 && umidade_solo <= 80) 
    {
    printf("Soja\n");

}  
    else if (pH >= 5.5 && pH <= 6.5 && umidade_solo >= 50 && umidade_solo <= 70)
    {
    printf("Milho\n");
    
}
    else if (pH >=4.5 && pH <=5.5 && umidade_solo >= 70 && umidade_solo <= 90)
    {
    printf("Café");

}
    else 
    {
    printf("Cultura inadequada\n");

}
    return 0;
}