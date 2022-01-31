#include<stdio.h>
#include<stdlib.h>

//Função vazia
void escrevercabecalho(){
	printf("*-------------------------*\n\n");
}

//Função com retorno inteiro
 int imprimirovalor(){
 	 
	  int imprimirovalor = 10;
 	printf("\n Natalia e Bruno %d\n",imprimirovalor );
 }
 
 //Função com retorno quebrado
 float imprimiovalordacasa(){
 float	imprimiovalordacasa = 1000.00;
 	printf("%f\n", imprimiovalordacasa);
 }
 
int main(){
	
	escrevercabecalho();
	
	printf("HI");
  imprimirovalor ();
  
  printf("VC é Linda");
  
   imprimiovalordacasa();
  
  printf("Seu marido te ama muito");
	
	return 0;
	
	
	
}
