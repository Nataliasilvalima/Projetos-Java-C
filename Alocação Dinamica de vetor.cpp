#include<stdio.h>
#include<stdlib.h>

//Fun��o para alocar um tamanho do vetor na memoria

// Cria-se uma variavel que ira retornar um ponteiro de vetor, com o parametro de tamanho que o usuario ira digitar 
int* alocacaovetor(int tamanho){
//Cria-se um ponteiro auxiliar para indicar o endere�o do ponteiro	
	int *aux;
// a fun��o malloc da biblioteca aloca espaco de memoria de acordo com o tamanho dos bytes da variavel
// a fun��o sizeof seleciona o tamanho do byte da variavel	
	aux = (int*) malloc(tamanho * sizeof(int));
// a fun��o retornara o ponteiro aux
	return aux;
}


int main(){
	
	int *vetor, tamanho, cont;
	
	printf("Digite o tamanho do vetor:");
	scanf("%d", &tamanho);
	
	vetor = alocacaovetor(tamanho);
	
	vetor[0] = 1;
    vetor[1] = 12;
    vetor[2] = 13;
    vetor[3] = 14;
    vetor[4] = 15;
//Caso queira que o vetor sempre busque um resutltado dependendo do tamanho do vetor  digitado pelo usuario, apenas acrescenatr um for para ler os valores:
/*	for(cont =0; cont < tamanho; cont++){
		vetor[cont] = 100; ( Apenas um exemplo)
	}*/
	for(cont =0; cont < tamanho; cont++){
		printf("%d\n", vetor[cont]);
	}
	
	free (vetor); //limpa a memoria apos n�o ser utilizada novamente.
	system ("pause");	
	return 0;
	
}






