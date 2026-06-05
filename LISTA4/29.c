#include <stdio.h>

int main() {
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    int menor = (A < B) ? A : B;
    int mdc = 1;

    for (int i = 1; i <= menor; i++) {
        if (A % i == 0 && B % i == 0) {
            mdc = i;
        }
    }

    printf("MDC: %d\n", mdc);

    return 0;
}
