#include <stdio.h>

int main(void) {

  int o,x,y;
  printf("Calculadora");
  printf("\n\n1--Soma");
  printf("\n2--Subtracao");
  printf("\n3--Multiplicacao");
  printf("\n4--Divisao");
  printf("\n\nDigite o numero desejado para a operacao :");
  scanf("%d",&o);

  switch(o){

      case 1:
      printf("\n\nDigite os dois numeros para a soma:");
      scanf("%d%d",&x,&y);
      printf("\n\na soma desses numeros e : %d",x+y);
      break;

      case 2:
      printf("\n\nDigite os dois numeros para a subtracao:");
      scanf("%d%d",&x,&y);
      printf("\n\na subtracao desses numeros e : %d",x-y);
      break;

      case 3:
      printf("\n\nDigite os dois numeros para a multiplicacao:");
      scanf("%d%d",&x,&y);
      printf("\n\na multiplicacao desses numeros e : %d",x*y);
      break;

      case 4:
      printf("\n\nDigite os dois numeros para a Divisao:");
      scanf("%d%d",&x,&y);
      printf("\n\na Divisao desses numeros e : %d",x/y);
      break;
  }
  return 0;
}
