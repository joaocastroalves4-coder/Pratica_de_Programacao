#include <stdio.h>
int main() {

    float Celsius, Zork;

    scanf("%f", &Celsius);

    Zork = (Celsius * 3) - 15;

    printf("%.0f graus Celsius equivalem a %.0f graus Zork", Celsius, Zork);
    
    return 0;
}