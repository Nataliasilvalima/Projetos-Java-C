#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL,"portuguese");
	float a, b;
	int c;
	printf("Digite os valores\n");
	scanf("%f %f", &a, &b);
	
	printf("\nDigite a op��o de conta desejada:\n 1- Soma\n 2- Subtra��o\n 3- multiplica��o\n 4-Divisao\n");
	scanf("%d",&c);
	
	switch (c){
		case 1:
			printf("O resultado da soma dos dois valores � %2.f \n", a + b);
			break;
		case 2:
		 printf("O resultado da subtra��o dos dois valores � %2.f \n", a - b);
			break;	
		case 3:
		 printf("O resultado da multiplica��o dos dois valores � %2.f \n", a * b);
			break;	
		case 4:
		 printf("O resultado da divis�o dos dois valores � %2.f \n", a / b);
			break;	
		default:
			printf("\n Op��o inv�lida\n");
			break;
		
	}
	
	
	
	
	
}
