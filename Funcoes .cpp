#include<stdio.h>
#include<stdlib.h>

//Fun��o vazia
void escrevercabecalho(){
	printf("*-------------------------*\n\n");
}

//Fun��o com retorno inteiro
 int imprimirovalor(){
 	 
	  int imprimirovalor = 10;
 	printf("\n Natalia e Bruno %d\n",imprimirovalor );
 }
 
 //Fun��o com retorno quebrado
 float imprimiovalordacasa(){
 float	imprimiovalordacasa = 1000.00;
 	printf("%f\n", imprimiovalordacasa);
 }
 
int main(){
	
	escrevercabecalho();
	
	printf("HI");
  imprimirovalor ();
  
  printf("VC � Linda");
  
   imprimiovalordacasa();
  
  printf("Seu marido te ama muito");
	
	return 0;
	
	
	
}
