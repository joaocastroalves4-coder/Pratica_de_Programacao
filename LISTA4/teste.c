#include <stdio.h>

  int to_array(int n, int *v) {
      int temp = n, len = 0, i;
      int aux[20];
      if (n == 0) { v[0] = 0; return 1; }
      while (temp > 0) {
          aux[len++] = temp % 10;
          temp /= 10;
     }
     for(i=0; i<len; i++) v[i] = aux[len-1-i];
     return len;
 }

 int f01(int n) {
     int v[20], len, i, s = 0;
     len = to_array(n, v);
     for (i = 0; i < len; i++) {
         s += v[i];
     }
     return s;
 }

 int f02(int n) {
     int v[20], len, i, s = 0;
     len = to_array(n, v);
     for (i = 0; i < len; i += 2) {
         s += v[i];
     }
     return s;
 }

 int f03(int n) {
     int v[20], len, i, s = 0;
     len = to_array(n, v);
     for (i = len - 1; i >= 0; i--) {
         if (v[i] % 2 != 0) s += v[i];
     }
     return s;
 }

 int f04(int n) {
     int v[20], len, i, m = -1;
     len = to_array(n, v);
     for (i = 0; i < len; i++) {
         if (v[i] > m) m = v[i];
     }
     return m;
 }

 int f05(int n) {
     int v[20], len, a, b, s = 0;
     len = to_array(n, v);
     a = 0; b = len - 1;
     while (a <= b) {
         if (a == b) s += v[a];
         else s += (v[a] - v[b]);
         a++; b--;
     }
     return s;
 }

 int f06(int n) {
     int v[20], len, i, c = 0;
     len = to_array(n, v);
     for (i = 0; i < len - 1; i++) {
         if (v[i] < v[i+1]) c++;
     }
     return c;
 }

 int f07(int n) {
     int v[20], len, i, j, s = 0;
     len = to_array(n, v);
     int k = (v[0] > len) ? len : v[0];
     for (i = 0; i < k; i++) {
         for (j = 0; j < k; j++) s += (i + j);
     }
     return s;
 }

 int f08(int n) {
     int v[20], len, m[5][5], i, j, s = 0;
     len = to_array(n, v);
     int d = (len > 4) ? 3 : 2;
     for(i=0; i<d; i++)
         for(j=0; j<d; j++)
             m[i][j] = v[(i+j)%len];
     for(i=0; i<d; i++) s += m[i][i];
     return s;
 }

 int f09(int n) {
     int v[20], len, i, s = 0;
     len = to_array(n, v);
     for (i = 0; i < len; i++) {
         if (i % 2 == 0) v[i] *= 2;
         else v[i] += 1;
     }
    for (i = 0; i < len; i++) 
        if (v[i] > 5) s += v[i];
    return s;
}

int f10(int n) {
    int v[20], len, i, j, s = 0;
    len = to_array(n, v);
    int k = (v[len-1] > 3) ? 2 : v[len-1];
    if (k == 0) k = 1;
    for(i = 0; i < k; i++)
        for(j = 0; j < k; j++)
            s += v[i] + v[j];
    return s;
}

int main(void) {
   int n;
   scanf("%d", &n);
   printf("%d\n", f01(n));
   printf("%d\n", f02(n));
   printf("%d\n", f03(n));
   printf("%d\n", f04(n));
   printf("%d\n", f05(n));
   printf("%d\n", f06(n));
   printf("%d\n", f07(n));
   printf("%d\n", f08(n));
   printf("%d\n", f09(n));
   printf("%d\n", f10(n));
   return 0;
}