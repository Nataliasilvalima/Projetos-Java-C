#include <stdio.h>

int main(){
	
	int numeros;
	int pares;
	int x;
	
	pares=0;
	
	for ( x =1; x<=5; x++ ){
	scanf("%i", &numeros);
	if(numeros%2 ==0) pares++;
		
	} 
	printf("%i valores pares\n", pares);
	
 return 0;	
	
	
	
	
}
