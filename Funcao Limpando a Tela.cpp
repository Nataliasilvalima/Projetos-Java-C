#include<stdio.h>
#include<stdlib.h>

void limpatela(){
	system ("CLS");
} 

int main(){
	
	int a ;
	
	printf("Informe um valor para 'a':");
	scanf("%d", &a);
	
	//Fun��o limpa a Tela
	limpatela();
		// Fun��o da biblioteca stdlib.h = system (CLS).
	
	return 0;
}
