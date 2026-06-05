#include <stdio.h>
void trocarAB(int a, int b) {
    
    printf("%d %d\n", b, a);
}

int main() {
    int a, b;
    
    scanf("%d %d\n", &a, &b);
    trocarAB(a, b);
   

    scanf("%d %d\n", &a, &b);
    trocarAB(a, b);

    
    scanf("%d %d\n", &a, &b);
    trocarAB(a, b);
 
    
    scanf("%d %d\n", &a, &b);
    trocarAB(a, b);
   
    scanf("%d %d", &a, &b);
    trocarAB(a, b);

    return 0;
}