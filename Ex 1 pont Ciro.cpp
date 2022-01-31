/*Criar uma funcao em C que receba como
parametro o valor de um angulo em radianos e
converta-o para graus. Obs.: O parametro
passado na chamada a funcao deve ser
alterado para graus.
Dica: graus = radianos*180/ ƒÎ./*
*/

#include <stdio.h>

void radiano(double *);

int main(){

double rad;

printf("Digite o valor\n");
scanf("%lf",&rad);

radiano(&rad);

printf("\nO valor digitado foi %.3lf",rad);

return 0;
}

void radiano(double*num){
	
	printf("valor radiano e %.3lf",*num*(180/3.14));
}


