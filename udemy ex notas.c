#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
	
	int nota1 , nota2, resultado;
		
	setlocale(LC_ALL,"portuguese");
	
	printf("Favor informar as notas\n");
	scanf("%d" "%d", &nota1, &nota2);
	
	resultado = nota1 - nota2;
	
	printf("A diferença das notas é %d", resultado);
	printf(" O valor absoluto da diferença das notas é %d\n", abs(&resultado));
	
}
