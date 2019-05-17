#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#define DIM 50


typedef struct{

    int id;
    char nome[40];
    char email[25];
    char telefone[15];
    char rua[25];
    char numero[10];
    char bairro[25];
    char cidade[25];
    char estado[20];

}AGENDA;

void organizaragenda(AGENDA *p1,int tam){
    int k,auxid;
    AGENDA aux2;

        for(k = tam; k!=0; k--){
					if(strcmp(p1[k].nome,p1[k-1].nome) < 0){
                    auxid=p1[k-1].id;
                    p1[k-1].id=p1[k].id;
                    p1[k].id=auxid;

					aux2 = p1[k-1];
					p1[k-1] = p1[k];
					p1[k] = aux2;

			}
			}

}

void inseriragenda(AGENDA *p,int i){

    puts("\n");
    printf("***************  Adicionar contato: ***************\n");


   if(i<DIM){
    p[i].id=i;

    setbuf(stdin,NULL);
    printf("Digite o nome do contato: ");
    setbuf(stdin,NULL);
    gets(p[i].nome);

    printf("Digite o email do contato: ");
    setbuf(stdin,NULL);
    gets(p[i].email);

    printf("Digite o telefone do contato: ");
    setbuf(stdin,NULL);
    gets(p[i].telefone);

    printf("Digite a rua do contato: ");
    setbuf(stdin,NULL);
    gets(p[i].rua);

    printf("Digite o numero da residencia do contato: ");
    setbuf(stdin,NULL);
    gets(p[i].numero);

    printf("Digite o nome do bairro contato: ");
    setbuf(stdin,NULL);
    gets(p[i].bairro);

    printf("Digite o nome da cidade contato: ");
    setbuf(stdin,NULL);
    gets(p[i].cidade);

    printf("Digite o nome do estado contato: ");
    setbuf(stdin,NULL);
    gets(p[i].estado);

    organizaragenda(p,i);}

    else{
        printf("\nA agenda esta lotada.");
    }
    }

void alterarcontato(AGENDA *p2){
    int aux,op;
    printf("\n\nDigite o id do contato a ser alterado: ");
    scanf("%d",&aux);

    while(op!=9){
    system("cls");
    puts("\n");
    printf("ID:%d, Nome:%s, Email:%s, Telefone:%s\n",p2[aux].id,p2[aux].nome,p2[aux].email,p2[aux].telefone);
    printf("Rua:%s, Numero:%s, Bairro:%s, Cidade:%s, Estado:%s\n",p2[aux].rua,p2[aux].numero,p2[aux].bairro,p2[aux].cidade,p2[aux].estado);
    puts("\n");
    printf("***************  Alterar contato: ***************\n");
    printf("\n");
    printf("[1] - Alterar nome\n");
    printf("[2] - Alterar email\n");
    printf("[3] - Alterar telefone\n");
    printf("[4] - Alterar rua\n");
    printf("[5] - Alterar numero\n");
    printf("[6] - Alterar bairro\n");
    printf("[7] - Alterar cidade\n");
    printf("[8] - Alterar estado\n");
    printf("[9] - Sair\n");
    printf("Escolha a opcao desejada: ");
    scanf("%d",&op);

    switch(op){

    case 1:
        printf("Digite o nome do contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].nome);
        break;

    case 2:
        printf("Digite o email do contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].email);
        break;

    case 3:
        printf("Digite o telefone do contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].telefone);
        break;

    case 4:
        printf("Digite a rua do contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].rua);
        break;

    case 5:
        printf("Digite o nuemero da casa do contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].numero);
        break;

    case 6:
        printf("Digite o bairro contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].bairro);
        break;

    case 7:
        printf("Digite o nome da cidade contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].cidade);
        break;

    case 8:
        printf("Digite o estado contato: ");
        setbuf(stdin,NULL);
        gets(p2[aux].estado);
        break;
    }
}

}

int removerusuario(AGENDA *p3){

    int aux1;

    printf("\n\nDigite o id do contato a ser removido: ");
    scanf("%d",&aux1);

         p3[aux1].id=51;
         strcpy(p3[aux1].nome,"");
         strcpy(p3[aux1].email,"");
         strcpy(p3[aux1].telefone,"");;
         strcpy(p3[aux1].rua,"");
         strcpy(p3[aux1].numero,"");
         strcpy(p3[aux1].bairro,"");
         strcpy(p3[aux1].cidade,"");
         strcpy(p3[aux1].estado,"");

        for(int j=aux1;j<50;j++){

					p3[j] = p3[j+1];

        }


}

void mostrarusuario(AGENDA *p4){

    char nome2[30];
    int k;

    printf("\n\nDigite o nome do contato: ");
    setbuf(stdin,NULL);
    gets(nome2);

    for(k=0;k<50;k++){

        if((strcmp(nome2,p4[k].nome))==0){
            puts("\n");
            printf("ID:%d, Nome:%s, Email:%s, Telefone:%s\n",p4[k].id,p4[k].nome,p4[k].email,p4[k].telefone);
            printf("Rua:%s, Numero:%s, Bairro:%s, Cidade:%s, Estado:%s\n\n",p4[k].rua,p4[k].numero,p4[k].bairro,p4[k].cidade,p4[k].estado);
            break;
           }
    }
        if(k>=50){
            printf("\nContato inexistente\n");
        }



}

void mostrarcontatos(AGENDA *p5,int j){

    puts("\n");
    printf("***************  Mostrar todos os contatos: ***************\n");

    for(int k=0;k<j;k++){
    printf("%s\n",p5[k].nome);
    }

}

void menu(int op,int ident){

   AGENDA agenda[DIM];

    while(op!=9){
    system("cls");
    printf("***************  Agenda: ***************\n");
    printf("\n");
    printf("[1] - adicionar contato\n");
    printf("[2] - alterar um contato\n");
    printf("[3] - remover um usuario\n");
    printf("[4] - procurar um contato pelo nome\n");
    printf("[5] - ver todos os contatos\n");
    printf("[9] - Sair\n");
    printf("Escolha a opcao desejada: ");
    scanf("%d",&op);

    switch(op){

    case 1:
        inseriragenda(agenda,ident);
        ident++;
        break;

    case 2:
        alterarcontato(agenda);
        break;

    case 3:
        removerusuario(agenda);
        break;

    case 4:
        mostrarusuario(agenda);
        system("pause");
        break;


    case 5:
        mostrarcontatos(agenda,ident);
        system("pause");
        break;
    }
}
}


int main(void){

    int men,ident;
    men=0;
    ident=0;

    menu(men,ident);

return 0;
}
