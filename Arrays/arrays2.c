#include <stdio.h>
#include <unistd.h>
int main(){
  int soma= 0,tic, i,f, vet1[5], vet2[5];
    for (i=0;i<5;i++){
      printf("Digite o %i numero do vetor 1:",i);
      scanf("%i",&vet1[i]);
    }
    sleep(1);
    printf("Vetor 2: \n");
      for (f=0;f<5;f++){
        printf("Digite o %i numero do vetor 2:",f);
        scanf("%i",&vet2[f]);
      }
      for(f=0;f<5;f++){
        tic = vet1[f]*vet2[f];
        soma = soma + tic;
        printf("%i \n",soma);

      }

  return 0;
}
