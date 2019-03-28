#include <stdio.h>

int maior(int a,int b,int c){
    if(a>b&&a>c){
        return a;
    }if(b>a&&b>c){
        return b;
    }else
        return c;
}

int main(void){

int a,b,c;

    printf("Retornar o maior entre tres numeros");

    printf("\nDigite o valor do primeiro numero:  ");
    scanf("%d",&a);
    printf("\nDigite o valor do segundo numero:  ");
    scanf("%d",&b);
    printf("\nDigite o valor do terceiro numero:  ");
    scanf("%d",&c);

    printf("\n\nO maior entre estes numeros %d %d %d e o : %d",a,b,c,maior(a,b,c));




return 0;
}
