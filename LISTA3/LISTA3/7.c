#include <stdio.h>
int atribuirConceito(int nota) {

    if (90 <= nota && nota <= 100) {

    return 'A';
}
    else if (80 <= nota && nota < 90) {

    return 'B';
}
    else if (70 <= nota && nota < 80) {

    return 'C';
}
    else if (60 <= nota && nota < 70) {

    return 'D';
}
    else if (nota < 60) {

    return 'F';
}
    else {

    return 'I';
}
}