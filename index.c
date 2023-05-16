#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
  int N1,N2,OP;
  float X;
  system("clear");
  printf("Menu de opçoes:\n");
  printf("1.Somar dois números\n");
  printf("2.Raiz quadrada de um número\n");
  printf("Digite a opção desejada:");
  scanf("%d",&OP);

  switch (OP){
    case 1:
      printf("Entre com um número:");
    	scanf("%d",&N1);
      printf("Entre com outro número:");
      scanf("%d",&N2);
    	printf("Soma dos números=%.2d\n",N1+N2);
      break;
    case 2:
      printf("Entre com um número:");
			scanf("%f",&X);
			printf("Raiz quadrada = %f.2\n",sqrt(X));
      break;
    default:
      printf("Opção inválida!\n");
  }
  return 0;
}