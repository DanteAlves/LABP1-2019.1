#include <stdio.h>

int main(void)
{

float aux,x,y;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f",&x);
    printf("\nDigite a segunda nota do aluno: ");
    scanf("%f",&y);

    aux=x+y;
    aux=aux/2;

    if(aux>=7.0){
        printf("\n\nA nota final do aluno foi %.2f portanto o aluno esta aprovado",aux);

    }else{

    printf("\n\nA nota final do aluno foi %.2f portanto o aluno esta reprovado",aux);
    }

return 0;
}
