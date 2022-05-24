#include <stdio.h>
#include <locale.h>
int main(){

int n1,n2,n3;
int maior, mabbles;
printf("Digite um numero:");
scanf("%i",&n1);

printf("Digite um numero:");
scanf("%i",&n2);

printf("Digite um numero:");
scanf("%i",&n3);

if (n1>n2&&n1>n3){

  if (n1<n2+n3){
    printf("e triangulo");
  }
}     else if (n2>n3&&n2>n1){

      if (n2<n1+n3){
        printf("e triangulo");
      }
    }else{

      if (n3<n2+n1){
        printf("e triangulo");
      }else{
        printf("nao e triangulo");
      }
    }

  return 0;
}
