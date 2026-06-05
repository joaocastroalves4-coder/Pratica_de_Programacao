#include <stdio.h>

double converte(float Celsius) {

    return Celsius * 1.8 + 32;
}

int main(){

    float Celsius;

    scanf("%f", &Celsius);

    printf("%.1f", converte(Celsius) );

    return 0;
}