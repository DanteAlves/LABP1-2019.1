#include <stdio.h>
#include <stdlib.h>

float somar(float x,float y){
    float soma;
    soma = x + y;

return soma;
}

float subtrair(float x,float y){
    float sub;
    sub = x - y;

return sub;
}

float multiplicar(float x,float y){
    float multi;
    multi = x * y;

return multi;
}

float divisao(float x,float y){
    float divi;
    divi = x / y;

return divi;
}

int main(void){

int m;
float n,memoria;

memoria=0;

while(m!=6){

    system("cls");
    printf("Programa de calculadora simples.");

    printf("\n\n1-Somar.");
    printf("\n2-Subtrair.");
    printf("\n3-Multtiplicar.");
    printf("\n4-Dividir");
    printf("\n5-Resetar memoria");
    printf("\n6-Sair do programa");

    printf("\n\nEstado atual da memoria: %.2f",memoria);

    printf("\n\nDigite o numero da opcao desejada:  ");
    scanf("%d",&m);

    switch(m){

         case 1:
         printf("\n\nDigite o numero para somar com a memoria:  ");
         scanf("%f",&n);
         memoria = somar(memoria,n);
         break;

         case 2:
         printf("\n\nDigite o numero para subtrair com a memoria:  ");
         scanf("%f",&n);
         memoria = subtrair(memoria,n);
         break;

         case 3:
         printf("\n\nDigite o numero para multiplicar com a memoria:  ");
         scanf("%f",&n);
         memoria = multiplicar(memoria,n);
         break;

         case 4:
         printf("\n\nDigite o numero para dividir com a memoria:  ");
         scanf("%f",&n);
         memoria = divisao(memoria,n);
         break;

         case 5:
         printf("\n\nResetando memoria");
         memoria = 0;
         break;

         case 6:
         break;
    }

}

return 0;
}
