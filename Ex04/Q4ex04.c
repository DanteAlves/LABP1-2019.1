#include <stdio.h>

int main(void)
{

int id;
id=0;


        printf("Digite a idade do atleta: ");
        scanf("%d",&id);

        if(id>=5&&id<=7){
                printf("\nO Atleta se pertence a categoria infantil A");

        }
        if(id>=8&&id<=10){
                printf("\nO Atleta se pertence a categoria infantil B");

        }
        if(id>=11&&id<=13){
                printf("\nO Atleta se pertence a categoria juvenil A");

        }
        if(id>=14&&id<=17){
                printf("\nO Atleta se pertence a categoria juvenil B");

        }
        if(id>18){
                printf("\nO Atleta se pertence a categoria senior");

        }





return 0;
}
