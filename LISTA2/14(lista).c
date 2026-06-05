#include <stdio.h>
int main() {

    float du, dudu, edu;
        
    scanf("%f %f %f", &du, &dudu, &edu);

    printf("%.2f %.2f %.2f\n", du * 1.1, dudu * 1.1, edu * 1.1);

    printf("%.2f", (du + dudu + edu) * 1.1);

    return 0;
}