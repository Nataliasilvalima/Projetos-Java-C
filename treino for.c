#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale (LC_ALL,"portuguese");
	
  /* Contagem regressiva
  	int a, b;
	
	for (a=10; a >= 1; a-- ){
	
	printf("%d\n", a);
	}
	b = 10;

while ( b>=0){
	
	printf("%d", b);
	b--;
}*/
/* Imprimir apenas os n�meros pares
int cont;
   for( cont = 10; cont <=20; cont ++){
   	if(cont%2 == 0){
   	printf("\n%d � par\n", cont);} else {
   		printf("\n%d � impar\n", cont);
	   }
   }*/
   // Imprimir n�meros primos
   int numero, i, aux =1;
   printf("Digite o n�meroer para saber se ele � primo");
   scanf("%d", &numero);
   
   for (i = 1; i<= numero; i++){
   	if (numero % i ==0){
   		aux= aux +1; }
   	printf("\n%d / %d tem o resto %d\n",numero, i , numero%i);
   }
   if( aux ==2){
   	printf ("O n�mero � primo");
   }
	
}
	

