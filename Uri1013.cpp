//Fa�a um programa que leia tr�s valores e apresente o maior dos tr�s valores lidos seguido da mensagem �eh o maior�. Utilize a f�rmula:
//Obs.: a f�rmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto � necess�rio para chegar no resultado esperado.

#include<stdio.h>

int main(){
	
	int a, b, c, d;
	
	scanf("%d %d %d", &a, &b , &c);
	
   d = a+b + abs( a - b)/2;
   d = d+c + abs(d - c)/2;
 
	printf("%d eh o maior\n");
	
return 0;
}
