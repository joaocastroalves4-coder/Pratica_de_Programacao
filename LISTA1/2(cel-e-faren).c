#include <stdio.h>
int main() {

float fahrenheit;
float celsius;
float resultado1;
float resultado2;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &celsius);
 
    resultado1 = (fahrenheit - 32) / 1.8;

    resultado2 = celsius * 1.8 + 32;

    printf( "Resposta da conversao em Celsius: %.2f\nResposta da conversao em Fahrenheit: %.2f", resultado1, resultado2);
    
    return 0;
 }