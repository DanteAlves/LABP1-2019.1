#include <stdio.h>

int main(void)
{
int n;

    printf("Digite o codigo do produto: ");
    scanf("%d",&n);

    if(n==1){
        printf("\nO codigo e referente a um alimento nao perecivel");
    }
    if(n>=2&&n<=4){
        printf("\nO codigo e referente a um  alimento perecivel");
    }
    if(n==5||n==6){
        printf("\nO codigo e referente a uma peca de Vestuario");
    }
    if(n==7){
        printf("\nO codigo e referente a uma peca de Higiene pessoal");
    }
    if(n>=8&&n<=10){
        printf("\nO codigo e referente a um Utensilio domestico");
    }
    if(n>10){
        printf("\nCodigo invalido");
    }



return 0;
}
