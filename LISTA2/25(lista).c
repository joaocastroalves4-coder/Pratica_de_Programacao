#include <stdio.h>
int main() {

    float X, Y, Z;

    scanf("%f %f %f", &X, &Y, &Z);
    
    printf("%.2f", (X + Y + Z) / 3);

    return 0;
}