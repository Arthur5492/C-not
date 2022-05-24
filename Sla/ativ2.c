#include <stdio.h>


int main(){
int n1;
printf("Digite um numero:");
scanf("%i",&n1);
int fat = n1;
    while (fat> 0){
      n1 = n1*fat;
      fat = --fat;

    }
printf("%i",n1);


  return 0;
}
