#include<stdio.h>
#include<stdlib.h>
#include<new>

int main(){
	
	int tamanho , cont, i;
	
	printf("Informe o tamanho do vetor\n");
	scanf("%d", &tamanho);
	
// Adicionando a biblioteca new o tamanho do vetor � adiconado na memoria sem precisar da fun��o malloc
	int *vetor = new int(tamanho);

//Este comando l� o que o usuario digita para ser arquivado no valor das posi��es do vetor	
	for(i=0; i<tamanho; i++){
	printf("Informe o valor do vetor posicao %d\n", i);
	scanf("%d", &vetor[i]);
	}
	
    for(cont =0; cont< tamanho; cont++){
    	printf("%d\n", vetor[cont]);
	}
	
	
	system ("pause");
	
	
	return 0;
}
