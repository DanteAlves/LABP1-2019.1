#include<stdio.h>
#include<windows.h>
#include<conio.h>

int main (void)
{

 int hor,min,seg;
 char c;

    printf("Digite a hora inicial : ");
    scanf("%d",&hor);
    printf("Digite os minutos  : ");
    scanf("%d",&min);
    printf("Digite os segundos : ");
    scanf("%d",&seg);


    while(hor < 24&&c!=27){

    for(seg;seg <= 60;seg ++){
        Sleep(1000);
        system("cls");

        if(seg>=60){
            seg=00;
            min++;
            if(min >=60){
                min=00;
                hor ++;
            }
        }
      printf("%d:%d:%d",hor,min,seg);
      printf("\nPressione ESC para parar.");
      if(kbhit()){
        c=getch();
        if(c==27){
            break;
        }

      }

    }
    }


return 0;
}
