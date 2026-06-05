#include <stdio.h>

int main() {
    char c1, c2, c3, c4, c5;

    scanf("%c,%c,%c,%c,%c", &c1, &c2, &c3, &c4, &c5);

    if (c1 == 'a') {c1 = 'b';}
    else if (c1 == 'e') {c1 = 'G';}
    else if (c1 == 'i') {c1 = 'Z';}
    else if (c1 == 'o') {c1 = 'm';}
    else if (c1 == 'u') {c1 = 'C';}
    else {c1 = c1;}

    if (c2 == 'a') {c2 = 'b';}
    else if (c2 == 'e') {c2 = 'G';}
    else if (c2 == 'i') {c2 = 'Z';}
    else if (c2 == 'o') {c2 = 'm';}
    else if (c2 == 'u') {c2 = 'C';}
    else {c2 = c2;}

    if (c3 == 'a') {c3 = 'b';}
    else if (c3 == 'e') {c3 = 'G';}
    else if (c3 == 'i') {c3 = 'Z';}
    else if (c3 == 'o') {c3 = 'm';}
    else if (c3 == 'u') {c3 = 'C';}
    else {c3 = c3;}

    if (c4 == 'a') {c4 = 'b';}
    else if (c4 == 'e') {c4 = 'G';}
    else if (c4 == 'i') {c4 = 'Z';}
    else if (c4 == 'o') {c4 = 'm';}
    else if (c4 == 'u') {c4 = 'C';}
    else {c4 = c4;}

    if (c5 == 'a') {c5 = 'b';}
    else if (c5 == 'e') {c5 = 'G';}
    else if (c5 == 'i') {c5 = 'Z';}
    else if (c5 == 'o') {c5 = 'm';}
    else if (c5 == 'u') {c5 = 'C';}
    else {c5 = c5;}

    printf("%c%c%c%c%c", c1, c2, c3, c4, c5);

    return 0;
}