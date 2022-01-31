#include <stdio.h>

void main (){
	
	int n, i;
	printf("Digite o tamanho do vetor");
	scanf("%d", &n);
	
	int numeros[n];
	printf("Digite os %d numeros\n", n);
	for(i=0; i<n; i++){
	scanf("%d", &numeros[i]);}
	
	for(i=1; i< n; i++){
		if(numeros[i] < numeros[i -1]){
			break;
		}
	}
	if( i<n){
		printf(" Os numeros Nao estao em ordem cresente ");
	} 
	else {
		printf("Os numeros estao em ordem crescente ");}
	}
	
	
	
	

