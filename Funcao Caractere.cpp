#include<stdio.h>
#include<stdlib.h>

// Mesmo sendo uma função de tipo letra eu consigo retornar um numero
// ex se colocar no lugar de x o numero 120, o programa convertera a numeração me trazendo a letra correspondente ao numero digitado. 
char retornaletra(){
	return 'x';
	
}


int main(){
	
	char letra;
	
	//Char recebendo o valor de uma função
	letra = retornaletra ();
	
  //Imprimindo o valor da função passada para a variavel
	printf("%c", letra);
	
	
	
	
	
return 0;

	
}
