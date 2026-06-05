#include <stdio.h>
#include <math.h>
double maiorAB(int A, int B) {
    
    return fmax(A, B);
}

int main() {

    float n_1, n_2, n_3, n_4, n_5, n_6, n_7, n_8, n_9, n_10;

    scanf("%f %f _%f_%f _%f_%f _%f_%f _%f_%f", &n_1, &n_2, &n_3, &n_4, &n_5, &n_6, &n_7, &n_8, &n_9, &n_10);

    printf("%.1f\n%.1f\n%.1f\n%.1f\n%.1f", maiorAB(n_1, n_2), maiorAB(n_3, n_4), maiorAB(n_5, n_6), maiorAB(n_7, n_8), maiorAB(n_9, n_10));

    return 0;
}