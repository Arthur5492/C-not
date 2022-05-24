#include <stdio.h>

int main(){

int n, k;
int pot=1;
printf("Digite um numero inteiro: ");
scanf("%i",n);

printf("Digite um numero inteiro: ");
scanf("%i",k);
while(pot<= k){
  n=n*pot;
pot = pot++;
}
printf("Potencia e: %i",n);
  return 0;
}
