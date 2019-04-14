#include <stdio.h>
#include <strings.h>
#include <windows.h>

char instancias(int n,int k){

char aluno[25],reprovado[25];
int problemas,menor,sair;
menor=10;
k++;
setbuf(stdin, NULL);

    printf("\nDigite o numero de alunos: ");
    scanf("%d",&n);
    setbuf(stdin, NULL);

      for(int i=0;i<n;i++){

                printf("\n\nDigite zero para ir a proxima instancia");
                printf("\nDigite o nome do aluno e o numero de problemas resolvidos por ele: ");
                scanf("%[a-z A-Z]s",aluno);
                scanf("%d",&problemas);

                    if(problemas<menor){
                        menor=problemas;
                        strcpy(reprovado, aluno);
                    }
                        else if(problemas==menor){
                            if(strcmp(reprovado,aluno)==0){
                            strcpy(reprovado,reprovado);
                            }else{
                            strcpy(reprovado,aluno);
                            }
                    }


                    if(i==n-1){
                        printf("\nDigite zero para finalizar a instancia ou 1 para ir a proxima instancia: \n");
                        scanf("%d",&sair);
                            if(sair==0){
                                break;
                            }else{
                            system("cls");
                            printf("\nInstancia %d",k);
                            printf("\n\n");
                            printf("%s",reprovado);

                            return instancias(n,k);
                            }
                        }

                setbuf(stdin, NULL);
            }
        system("cls");
        printf("\nInstancia %d",k);
        printf("\n\n");

return printf("%s\n\n",reprovado);
}


int main(void){

int n,k;
n=0;
k=0;

    instancias(n,k);


return 0;
}
