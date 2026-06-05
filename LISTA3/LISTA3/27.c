#include <stdio.h>

int main() {
    double n1, n2, n3, media;

    scanf("%lf %lf %lf", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3.0;

    if (media >= 7.0) {
    printf("Aprovado\n%.2lf\n", media);
    } 
    
    else if (media >= 5.0) {
    printf("Recuperacao\n%.2lf\n", media);
    } 

    else {
    printf("Reprovado\n%.2lf\n", media);
    }

    return 0;
}