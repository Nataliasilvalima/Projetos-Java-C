#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool retornabooleana(){
	return true;
	
}

int main(){
	//Criando Variavel
	bool variavelbooleana;
	
	// Variavel recebendo o valor de uma funcao:
	
	variavelbooleana = retornabooleana();
	
	if (variavelbooleana){
		printf("E verdadeiro\n");
	} else{
		printf("E falso\n");
	}
	
	// imprimindo o valor da funçao passada para a variavel
	printf("%d", variavelbooleana);
	
	
	
	return 0;
}
