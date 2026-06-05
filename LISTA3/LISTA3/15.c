#include <stdio.h>
int main() {

    int idade;

    scanf("%d", &idade);

    if (idade <= 12) {

    printf("Crianca");
}
    else if (idade > 12 && idade <= 17) {

    printf("Adolescente");
}
    else if (idade > 17 && idade < 60) {

    printf ("Adulto");
}
    else {

    printf("Idoso");
}
    
    return 0;
}