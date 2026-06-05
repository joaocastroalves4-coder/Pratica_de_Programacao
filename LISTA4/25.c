#include <stdio.h>
int main() {

    int V, J, M, i;

    scanf("%i%i%i", &V, &J, &M);

    for (i = 0; V <= M ; i++) {
    
        V = V + V * (J/100.0);

    }
    
    printf("Meses: %i", i );
    
    return 0;
}