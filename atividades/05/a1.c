#include <stdio.h>

int main(){

int cont = 0,n1;
int soma, resultado;
    do {
    printf("Digite um numero:");
    scanf("%i",&n1);
    cont++;
    soma = n1+soma;
    resultado = soma/n1;
}
while(cont <= 5);

printf("A media dos 5 numeros e %i", resultado);

return 0;
}
