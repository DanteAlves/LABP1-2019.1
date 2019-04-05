#include <stdio.h>
#include <stdlib.h>
#define DIM 3

void preenchermat(int matriz[DIM][DIM]){
	int i,j;
	printf("\n");
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("[%d][%d] : ",i,j);
			scanf("%d",&matriz[i][j]);
	}
}
}

void imprimirmat(int matriz[DIM][DIM]){
	int i,j;
	printf("\n");
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
}

int somarelementos(int matriz[DIM][DIM]){
	int i,j,soma;
	soma=0;
	for(i=0;i<DIM;i++){
		for(j=0;j<DIM;j++){
			soma+=matriz[i][j];
	}
}
return soma;
}

void decrementarmat(int matriz[DIM][DIM]){
	int i,j,aux,maior;
	aux=0;
    maior=matriz[0][0];
	   for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++){
            if(maior<matriz[i][j]){
            maior=matriz[i][j];
            }

        }
    }
        for(i=0; i<DIM; i++){
         for(j=0;j<DIM;j++){
            if(matriz[i][j]==maior){
                  matriz[i][j]--;
                  aux=1;
                  break;
            }

            }
        if(aux==1){
        break;}
        }

    printf("\n\nO maior elemento da matriz e : %d",maior);
}



int main(void){
int matriz[DIM][DIM];

	printf("\nDigite os valores positivos para preenchimento da matriz\n");
	preenchermat(matriz);
	printf("\nMatriz Original\n");
	imprimirmat(matriz);
	printf("\nIteracoes\n\n");
	int soma;
	while(1){
		soma=somarelementos(matriz);
		imprimirmat(matriz);
        decrementarmat(matriz);
		printf("\nSoma dos elementos=%d\n\n",soma);
		if(soma<=0){
			break;
		}
		}

return 0;
}
