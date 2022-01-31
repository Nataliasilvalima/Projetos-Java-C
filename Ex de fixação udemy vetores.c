#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	
	setlocale(LC_ALL,"portuguese");
	
  float	vetor[3]; 
	 int cont;
	 
	 for(cont =0; cont <3; cont++){
	printf("Digite os valores das notas:");
	scanf("%f",&vetor[cont]);
}
		
	printf("Os valores são \n%.1f \n%.1f \n%.1f \n", vetor[0], vetor[1],vetor[2]);
	printf(" A média das notas é %.1f\n",(vetor[0]+ vetor[1]+vetor[2])/3);	

	
}
