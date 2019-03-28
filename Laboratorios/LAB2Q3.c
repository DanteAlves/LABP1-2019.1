#include <stdio.h>

double fat(int n){
    double fat;
    for(fat=1;n>1;n=n-1){
        fat = fat*n;
    }
    return fat;
}

main(void){
int n,m,nm;
double total;

    printf("Digite o numero de alunos totais da sala: ");
    scanf("%d",&n);

    printf("Digite o numero de alunos no primeiro grupo: ");
    scanf("%d",&m);

    nm=n-m;

    total = fat(n)/(fat(m)*fat(nm));


    printf("\n\nO numero de possibilidades da divisao em 2 grupos dessa sala e:  %.0f",total);


return 0;
}
