#include <stdio.h>
#include <math.h>

int pot(int base,int exp){
    int expo;
    expo=round(pow(base,exp));
return expo;
}

int main(void){

int b,e;

    printf("Digite o valor da base:  ");
    scanf("%d",&b);
    printf("\nDigite o valor do expoente: ");
    scanf("%d",&e);

    printf("\n\nO resultado do calculo e: %d",pot(b,e));


return 0;
}
