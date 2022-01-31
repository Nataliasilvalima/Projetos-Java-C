#include <stdio.h>
#include<iostream>
#include <stdlib.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int matriz [2] [2], i, j;
	// acrescentando valores na matriz
	matriz [0][0] = 1;
	matriz [0][1] = 2;
	matriz [1][0] = 3;
	matriz [1][1] = 4;
	
	//imprimindo valores na tela
	for( i=0; i<4; i++){
		for(j=0; j<4; j++){
			std::cout << "\ni ="<<i << "\nj ="<<j;
		}
		
		
		
	}
	
	
	
	
	
	
	return 0;
}
