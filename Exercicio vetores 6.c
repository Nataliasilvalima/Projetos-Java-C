#include <stdio.h>

void main (){
	
	int numeros [10], i;
	printf("Digite os numeros");
	
	for(i=0; i<10; i++){
		scanf("%d",  &numeros[i]);
	}
	for(i=9; i>10; i--){
		printf("\n", numeros[i]);
	}
	
	
}
