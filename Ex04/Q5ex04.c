#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void)
{

int op;
float aux,x,y,z;

    printf("1=Geometrica");
    printf("\n2=Ponderada");
    printf("\n3=Harmonica");
    printf("\n4=Aritimetica");

    printf("\n\nEscolha a equacao desejada: ");
    scanf("%d",&op);
    printf("\nDigite o primeiro numero: ");
    scanf("%f",&x);
    printf("\nDigite o segundo numero: ");
    scanf("%f",&y);
    printf("\nDigite o terceiro numero: ");
    scanf("%f",&z);

    switch (op){

    case 1:

        aux=x*y*z;
        printf("\n\nO resultado da geometrica da equacao e %f",cbrt(aux));
        break;

    case 2:

        aux=x+(2*y)+(3*z);
        printf("\n\nO resultado da ponderada da equacao e %f",aux/6);
        break;

    case 3:

        aux=1/x+1/y+1/z;
        printf("\n\nO resultado da harmonica da equacao e %f",1/aux);
        break;

    case 4:

        aux=x+y+z;
        printf("\n\nO resultado da aritimetica da equacao e %f",aux/3);
        break;

    }

return 0;
}
