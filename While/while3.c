#include <stdio.h>

int main(){
int n1 = 1;
float nota, soma;
while (n1 <=10){
printf("Digite a nota do aluno %i: \n", n1);
scanf("%f", &nota);
n1 = n1+1;
soma = soma+nota;


}
float media = soma/n1;
printf("Media = %.2f", media);

  return 0;
}
