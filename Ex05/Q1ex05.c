#include <stdio.h>
#include <windows.h>

int main(void)
{
   int min,seg;

   min=10;
   seg=10;

    printf("Insira o minuto de inicio : \n");
    scanf("%d",&min);
    printf("Insira o segundo de inicio : \n");
    scanf("%d",&seg);

	while (min >= 0){


      for(;seg>=0;seg--){
        Sleep(1000);
        system("cls");

        puts("Contagem Regressiva : \n\n");
        puts("-------");
        printf("|%d:%d|\n",min,seg);
        puts("-------");

        if(seg<=0){
            min--;
            seg=60;
        }
      }
	}


	return 0;
}
