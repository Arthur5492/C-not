#include <stdio.h>
#include <unistd.h>

int main(){

int n1;

printf("Digite numero:");
scanf("%i",&n1);

while (n1<=10){
printf("%i \n", n1);
sleep(1);
n1 = n1+1;



}

  return 0;
}
