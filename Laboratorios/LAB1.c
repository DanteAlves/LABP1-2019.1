#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (void)
{

int i; //Opção do programa
char c;

int lin,t1,t2,t3,t4; //Variaveis triangulo de floyd

int num1,i2; //variaveis sequencia de termos

int n;           //Variaveis do
float an,a1,r;  //progreso aritimetico

int num2;    //Variaveis da
float soma;  //harmonica


    do{
        printf("\n\n1-Triangulo de floyd \n2-Sequencia de termos \n3-Progressao aritimetica \n4-Serie harmonica \n5-Sair do programa\n\n");
        printf("Digite a opcao desejada:  ");
        scanf("%d",&i);


        switch(i){

       case 1:  system("cls");
                printf("\nDigite o numero de linhas para o calculo: ");
                scanf("%d",&lin);
                printf("\n");

                t1=lin*(lin+1)/2;

                for (t2=0;t1;t2++)t1/=10;

                t1=1;

                for (t3=1;t3<=lin;t3++) {
                    for (t4=0;t4<t3;t4++){

                    printf("%*d ",t2,t4+t1);
                    }

                printf("\n");
                t1+=t3;
                }
        break;

        case 2: system("cls");
                printf("\nDigite o numero inicial da sequencia:  ");
                scanf("%d",&num1);
                printf("\n");

                    for(i2;num1!=1;i2++){
                        if(num1%2==0){
                            num1=num1/2;
                        }else{
                           num1=(3*num1)+1;
                        }
                        printf("%d",num1);
                        if(num1==1){
                            break;
                        }
                        printf("->");
                    }
        break;

        case 3: system("cls");
                printf("\nEntre com o valor do primeiro termo: ");
                scanf("%f",&a1);
                printf("\nEntre com o valor da razao: ");
                scanf("%f",&r);
                printf("\nDigite o numero de termos: ");
                scanf("%d",&n);

                while(n>0){
                    an = (a1 + (n - 1) * r);
                    printf("%f\n",an);
                    n--;
                }
        break;

        case 4: system("cls");
                printf("Digite um numero : ");
                scanf("%d",&num2);

                    for(;num2>0;num2--){
                    soma+=(1.0/num2);
                }

                printf("\na soma total de h(n) e :  %f",soma);
    }

    }while(i!=5);

return 0;
}
