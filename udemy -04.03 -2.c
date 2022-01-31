#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL,"portuguese");
	float a, b;
	int c;
	printf("Digite os valores\n");
	scanf("%f %f", &a, &b);
	
	printf("\nDigite a opção de conta desejada:\n 1- Soma\n 2- Subtração\n 3- multiplicação\n 4-Divisao\n");
	scanf("%d",&c);
	
	switch (c){
		case 1:
			printf("O resultado da soma dos dois valores é %2.f \n", a + b);
			break;
		case 2:
		 printf("O resultado da subtração dos dois valores é %2.f \n", a - b);
			break;	
		case 3:
		 printf("O resultado da multiplicação dos dois valores é %2.f \n", a * b);
			break;	
		case 4:
		 printf("O resultado da divisão dos dois valores é %2.f \n", a / b);
			break;	
		default:
			printf("\n Opção inválida\n");
			break;
		
	}
	
	
	
	
	
}
