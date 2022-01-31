#include<stdio.h>
#include<stdlib.h>

// Função com mais de um parametro Funcao com retorno vazio 
void mostrasoma(int primeirovalor, int segundovalor){
  printf("A soma dos dois valores %d e %d e = %d\n",primeirovalor,segundovalor,primeirovalor+segundovalor);	
}

 int retornasoma(int primeirovalor, int segundovalor){
 	return primeirovalor+segundovalor;
 }
 
int main(){
	
int a = 5, b = 7;

  mostrasoma(a,b);
 
 printf("A soma dos dois valores %d e %d e = %d\n",a,b,retornasoma(a,b));
	
	
	
	
	return 0;
}
