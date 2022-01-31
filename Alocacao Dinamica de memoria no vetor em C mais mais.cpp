#include<stdio.h>
#include<stdlib.h>
#include<new>

int main(){
	
	int tamanho , cont;
	
	printf("Informe o tamanho do vetor\n");
	scanf("%d", &tamanho);
	
// Adicionando a biblioteca new o tamanho do vetor é adiconado na memoria sem precisar da função malloc
	int *vetor = new int(tamanho);
	
	for (cont =0; cont< tamanho; cont ++){
		vetor[cont] = cont;// posso inserir valores nos vetores.
		printf("%d", vetor[cont]);
	}
	
	system ("pause");
	
	free (vetor);
	
	
	return 0;
}
