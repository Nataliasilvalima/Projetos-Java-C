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
	
	//imprimindo os valores da matriz com for
	for( i=0; i<2; i++){
		for(j=0; j<2; j++){
			
			//imprimindo as posições da matriz  na tela
			//std::cout << "\ni ="<<i << " j ="<<j;
			//imprimindo os valores da matriz  na tela
			std::cout <<matriz [i][j] *2 <<" "; //usando operações matemáticas
		}		
	      std::cout <<"\n";// pulando linha no final	
		  }
		  for( i=0; i<2; i++){
		for(j=0; j<2; j++){
		  scanf("%d", &matriz[i][j]);}
	}
		for( i=0; i<2; i++){
		for(j=0; j<2; j++){ 
		  std::cout <<matriz [i][j];
		  
	}}
            return 0;
 		  
}

	
	
