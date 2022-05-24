#include <stdio.h>

int main(){

float pol;

printf("Nivel de poluicao:");
scanf("%f", &pol);

if (pol<0.3){
  printf("Tudo normal");
} else if (pol>=0.3 && pol<0.4){
  printf("Socorro industria 1!!");
}else if (pol>0.4&& pol<0.5){
  printf("Industria 1 e 2 precisamos de sua ajuda.");
}else {
  printf("Todos os grupos devem ser notificados");

}

  return 0;
}
