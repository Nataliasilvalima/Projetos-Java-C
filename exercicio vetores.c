#include<stdio.h>

void main(){
	
	int vet[8], i;
	
	printf("Digite os numeros:\n");
	for(i=0; i<8; i++){
	scanf("%d", &vet[i]);}
	

      printf("\n Esses são os numeros pares");
      
		for (i=0; i<8; i++){
			if(vet[i] %2==0){
		printf("\n%d", vet[i]);
}}
		
}
