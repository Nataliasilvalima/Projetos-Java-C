#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int opcao;
	
	while (opcao < 1 || opcao >3){
	
	printf("Escolha uma opcao:");
	printf("\n1- Opcao 1");
	printf("\n2- Opcao 2");
	printf("\n3- Opcao 3");
	
	scanf("%d", &opcao);
	
	switch (opcao){
		case 1:
			printf("Escolheu opcao 1");
			break;
	    case 2:
			printf("Escolheu opcao 2");
			break;
		case 3:
			printf("Escolheu opcao 3\n");
			break;
			
			default:
				printf("Opcao ivalida\n");
				break;
		
		
	}
	
}
	
}



