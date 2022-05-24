#include <stdio.h>

int main(){

int n, soma=0;
int cont;
  printf("Digite o numero final:");
  scanf("%i",&n);
    while (soma <=n){
      soma++;
      if (soma%3 == 0 && soma%2 == 0){
        cont = cont+soma;

      }

    }
    printf("Soma = %i", cont);
  return 0;
}
