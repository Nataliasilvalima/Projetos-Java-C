#include<stdio.h>
#include<stdlib.h>
#include<new>

int main(){
	int colunas, linhas, cont;
	//Ponteiro de ponteiro para alocar a memoria das linhas
	int **matriz, i,j;
	//Perguntando a usuario o total de linhas e colunas da matriz
    printf("Digite o numero de linhas\n");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas\n");
    scanf("%d", &colunas);
 
	 //Alocando a memoria das linhas
	 	matriz = (int**) new int (linhas);
	//Alocando a memorias das colunas
	for(i=0; i<linhas; i++){
		matriz[i] = (int*) new int (colunas);
	}
	 
	//Percorrendo e lendo a Matriz
	for (i = 0; i<linhas; i++){
		for (j=0; j<colunas; j++){
			matriz [i][j] = i;
			printf("%d", matriz[i][j]);
		}
	   printf("\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
