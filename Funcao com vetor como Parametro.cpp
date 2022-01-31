#include<stdio.h>
#include<stdlib.h>

// Função com vetor como parametro sempre sera utilizado o ponteiro do endereço do vetor
// Criando o parametro tamanho eu consigo executar um vetor de qualquer tamanho no meu codigo
int i;
 void imprimevetor(int *vetor, int tamanho){
 	for(i=0; i< tamanho; i++){
	 printf("\n%d\n", vetor[i]);}
 }
 
 // Função Modifica os valores contido dentro do vetor
void modificavetor(int *vetor, int tamanho){
	for(i=0; i< tamanho; i++){
	vetor[i] = vetor[i] +1;}
}

int main(){
	
	int vetor[3] = {1,2,3};
	
	 
	//Função com o parametro do vetor, quando executada a função o valor do parametro muda para o endereço do vetor
	// Nunca esquecer de informar o tamanho do novo vetor
	 
	imprimevetor(vetor,3 );
	modificavetor(vetor,3);
	imprimevetor(vetor,3);
	
	
	return 0;
}
