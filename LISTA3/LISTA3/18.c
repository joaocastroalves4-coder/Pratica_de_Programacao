#include <stdio.h>

int main() {
    double l1, l2, l3;

    scanf("%lf %lf %lf", &l1, &l2, &l3);


    if (l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {

        if (l1 == l2 && l2 == l3)
        printf("Equilatero\n");

        else if (l1 == l2 || l1 == l3 || l2 == l3)
        printf("Isosceles\n");

        else
        printf("Escaleno\n");
    } 
    
    else {
    printf("Nao forma um triangulo\n");
    }

    return 0;
}
