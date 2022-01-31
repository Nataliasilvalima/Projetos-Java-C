#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
	
	setlocale(LC_ALL,"portuguese");
	
	int matriz [2][2], i,j,temp1, temp2;
	
	//lendo valores auxiliares	
	
	for(i=0; i<2; i++){	
	    for(j=0; j<2; j++){
	printf("Digite os valores das matrizes [%d][%d]\n", i,j);
	scanf("%d", &matriz [i][j]);
	}
}
	
 // trocando os valores das matrizes
	 temp1 = matriz [0][0] ;
	 temp2 = matriz [0][1];
	 
	 matriz [0][0]= matriz [1][0];
	 matriz [0][1]= matriz [1][1];
	 
	 matriz [1][0] = temp1;
	 matriz [1][1] = temp2;
	 
	 // imprimindo a matriz iversa
	printf("%d%d\n", matriz[0][0], matriz[0][1]);
	printf("%d%d\n", matriz[1][0], matriz[1][1]);
	
}




