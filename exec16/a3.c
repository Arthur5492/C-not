#include <stdio.h>

int main(){

int n1, cont;
printf("Digite um numero inteiro:");
scanf("%i",&n1);
if (n1<0) printf("nao existe");
cont = n1-1;

while(cont>=1){
n1= n1*cont;
cont--;

}
printf(" O numero é: %i",n1);



  return 0;
}
