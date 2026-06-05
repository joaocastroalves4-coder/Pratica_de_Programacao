#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    printf("Fatores: ");

    for (int i = 2; i <= N; i++) {


        while (N % i == 0) {

            printf("%d ", i);
            N = N / i;
        }
    }

    printf("\n");

    return 0;
}
