#include <stdio.h>
int main() {

    float raio, area;
    const float Pi = 3.14159;

    printf("Valor do raio: ");
    scanf("%f", &raio);

    area = raio * raio * Pi;

    printf("%.2f", area);
    
    return 0;
}