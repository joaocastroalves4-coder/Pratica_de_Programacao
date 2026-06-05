#include <stdio.h>

int f01 (int n) {
int d, result =0;
d = n%10;
switch (d){
case 0: case 2: case 4: case 6: case 8:
result += n/1000;
case 1: case 3: case 5: case 7: case 9:
result += n/100; break; default:
result += n;
}
return result;
}

int f02 (int n) {
int d1, d2, result;
d1 = n % 10;
d2 = d1 % 2;
result = (d2 == 0) ? n%1000 : n%100;
return result;
}

int f03 (int n) {
int d1, d2, result;
d1 = n % 5;
d2 = n % 3;
n = n % 100;
if ((d1 == 0) && (d2 == 0)){
result = n;}
else{
result = n - 1000;}
return result;
}

int f04 (int n) {
int d1, d2, result;
d1 = n % 5;
d2 = n % 3;
n = n % 1000;
if (d1 == 0) {
 if (d2 == 0) {
result = n;
}
else{
result = n + 1;
}
}
else
result = n + 2;
return result;
}

int f05 (int n) {
int d1, d2, d3, result;
d1 = n % 4;
d2 = n % 3;
d3 = n % 2;
if ((d1 == 0 && d2 == 0) || (d1 == 0 && d3 == 0) || (d2 == 0 && d3 == 0)) {
result = n;}
 else {
result = n + 36;}
return result;
}

int f06 (int n) {
int d1, d2, d3, result;
d1 = n % 4;
d2 = n % 3;
d3 = n % 2;
n=n%1000;
if ((d1 == d2) && (d1 == d3)){
result = n;}
else if (d2 == d3){
result = n / 1000;}
else if (d1 == d3){
result = n / 100;}
else{
result = n / 10;}
return result;
}

int f07 (int n) {
int a = n % 1000;
int b = n / 10000000;
if (a > b){
return a * b;}
else if (a == b){
return a + b;}
else{
return a - b;}
}

int f08 (int n) {
int x = (n % 10) * (n/ 100000000);
int y = (n / 10000000);
if (x > y){
return x - y;}
else if (x == y){
return x + y;}
else{
return y - x;}
}

int f09 (int n) {
int left = n % 100;
int right = n % 10;
int prod = left * right;
if (prod > n % 1000){
return prod - 1000;}
else if (prod < n % 900){
    return prod + 1000;}
else{
return 1000 - prod;}
}

int f10 (int n) {
int d1 = (n/10) % 100;
int d2 = (n / 100) % 100;
int d3 = (n / 1000) % 100;
if (d1 > d2 && d1 > d3) {
return d1 - (d2 + d3);}
else if (d2 > d1 && d2 > d3){
return d2 - (d1 + d3);}
else{
return d3 - (d1 + d2);}
}
int main (void){
    int n;
scanf ("%d", &n) ;
printf ("%d\n", f01 (n));
printf ("%d\n", f02 (n));
printf ("%d\n", f03 (n));
printf ("%d\n", f04 (n));
printf ("%d\n", f05 (n));
printf ("%d\n", f06 (n));
printf ("%d\n", f07 (n));
printf ("%d\n", f08 (n));
printf ("%d\n", f09 (n));
printf ("%d\n", f10 (n));
return 0;
}