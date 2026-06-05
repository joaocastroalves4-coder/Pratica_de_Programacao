#include <stdio.h>
#include <math.h>

double powAPC(int X, int Y) {

    return pow(X, Y);
}
    
int main() {
    
    int X, Y;
    
    scanf("%d %d", &X, &Y);

    printf("%.1f", powAPC(X, Y));

    return 0;
}