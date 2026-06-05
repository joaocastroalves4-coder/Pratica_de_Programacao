#include <stdio.h>
int main() {

    int DD, MM, AA;

    scanf("%d/%d/%d", &DD, &MM, &AA);

    printf("%02d-%02d-%02d\n%02d-%02d-%02d\n%02d/%02d/%02d", DD, MM, AA, MM, DD, AA, AA, MM, DD);

    return 0;
}