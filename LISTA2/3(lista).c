#include <stdio.h>
int main() {

    char a, b, c;

    scanf("%c %c %c", &a, &b, &c);

    printf("%c%c%c\n%c\n%c%c\n%c %c %c\n", a, b, c, a, b, b, c, c, c);
    printf("X == %c, Y == %c, Z == %c\nX != %c, Y != %c, Z == %c", a, b, c, a, b, c);

    return 0;
}