#include <stdio.h>
int main() {
int num;

do{
    scanf("%i",&num);
    if(num>=0){
      printf("Numero positivo lido: %i",num);
    }
}
while(num<0);

  return 0;
}