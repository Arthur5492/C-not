#include <stdio.h>

int main(){

int i, tamanhovet, vetor[5];
  printf("Digite o tamanho do vetor(max 100):");
  scanf("%i",&tamanhovet);
  //tamanhovet = tamanhovet-1;
for(i = 0;i<tamanhovet;i++){
    printf("Digite o numero %i do vetor:",i);
    scanf("%i",&vetor[i]);
}

for (i=tamanhovet-1; i>=0;i--){
  printf("\n %i", vetor[i]);
}




  return 0;
}
