#include <stdio.h>  
#include <math.h>

int p1(int n) { return (n / 10000000) % 100; }  
int p2(int n) { return (n / 10000) % 100; }     
int p3(int n) { return (n / 100) % 100; }       
int p4(int n) { return n % 100; }               
int p5(int n) { return (p1(n) + p3(n) + p4(n)) % 50; } 


int g1(int d) {
    if (d % 3 == 0 && d < 50) return d * d - 5;
    else if (d % 5 == 0) return d / 5 + 15;
    else if (d > 70) return 200 - d;
    else return (int)pow(d % 10, 2);
}

int g2(int a, int b) {
    if (a == b) return 0;
    else if (a > b && (a + b) % 2 == 0) return (a + b) / 2;
    else if (b % 3 == 0) return (a * b) % 100;
    else return (a - b) + 7;
}

int g3(int n) {
    int x = p2(n);
    int y = p4(n);
    if ((x + y) % 2 == 0)
        return (int)pow((x + y) % 10, 2);
    else if (x > y)
        return (x - y) * 3;
    else
        return (x + y) / 2 + 11;
}

int g4(int d) {
    int sel = d % 6;
    switch (sel) {
        case 0: return d / 3;
        case 1: return d * 2 + 5;
        case 2: return d - 15;
        case 3: return (int)pow(d % 7, 3);
        case 4:
            if (d > 50) return d / 2;
            else return d + 20;
        default:
            return d % 10 + 99;
    }
}

int g5(int n) {
    if (n <= 1) return 1;
    if (n % 2 == 0) return g5(n / 2) + n % 7;
    return g5(n - 1) + 3;
}

void outi(int x) {
    printf("%d\n", x);
}

int main(void) {
    int matricula = 89;

    int a = g1(p1(matricula));
    int b = g2(p2(matricula), p3(matricula));
    int c = g3(matricula);
    int d = g4(p5(matricula));
    int e = g5(p4(matricula) % 10);

    outi(a);
    outi(b);
    outi(c);
    outi(d);
    outi(e);
    outi(g2(a, c));
    outi(g4(g1(p3(matricula))));

    return 0;
}