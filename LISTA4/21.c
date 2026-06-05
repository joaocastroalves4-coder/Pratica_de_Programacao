#include <stdio.h>
int main() {

    int N; 
    double temp, max, min,soma = 0;

    scanf("%i", &N);

    scanf("%lf", &temp);

    max = temp;
    min = temp;
    soma = temp;

    for (int i = 1; i < N; i++) {
    
        scanf("%lf", &temp);

        if (temp > max) {
        
            max =  temp;
}

        if (temp < min) {

            min = temp;
        
}
        soma += temp;
}

    double media = soma / N;

    printf("Maximo: %.2lf\n", max);
    printf("Minimo: %.2lf\n", min);
    printf("Media: %.2lf\n", media);

    return 0;
}