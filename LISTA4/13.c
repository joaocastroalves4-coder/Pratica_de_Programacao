#include <stdio.h>
int main() {

    int N;
    int count = 0;

    scanf("%i", &N);

    do {
        N= N /10;
        count++;
}
    while (N > 0);
    
        printf("Digitos: %i", count);
    
    return 0;
}