#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
	
	setlocale(LC_ALL,"portuguese");
	int nota1, nota2, resultado;
	
 printf("Favor inserir as notas\n");
 scanf("%d" "%d", &nota1, &nota2);
 resultado = nota1 - nota2;
 printf("O valor da diferença das notas é %d \n", resultado);
 printf("O valor absoluto é %d" , abs(resultado));
	
}


