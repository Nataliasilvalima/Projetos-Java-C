#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	
	int nota1 , nota2, resultado;
		
	setlocale(LC_ALL,"portuguese");
	
	printf("Favor informar as notas\n");
	scanf("%d" "%d", &nota1, &nota2);
	
	resultado = nota1 - nota2;
	
	printf("A diferen�a das notas � %d", resultado);
	printf(" O valor absoluto da diferen�a das notas � %d\n", abs(&resultado));
	
}
