#include<stdio.h>
#include<conio.h>
#include<windows.h>

int main(void){

int num,aux;
char c;

aux=0;

    printf("Digite o numero desejado para ver a tabuada : ");
    scanf("%d",&num);

    system("cls");

    printf("\nTabuada do numero %d",num);
    printf("\nPressione ESC para parar");

    for(;num>0&&c!=27;aux ++){


            printf("\n\n %d x %d = %d",num,aux,num*aux);
            Sleep(2000);
            if(kbhit()){
                c=getch();
                if(c==27){
                    break;
                }
            }
    }
return 0;
}
