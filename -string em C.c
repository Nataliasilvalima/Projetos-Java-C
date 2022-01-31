#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"portuguese");
	char palavra [15];
	printf("Digite uma palvara\n");
 // limpar o buffer antes de ler a palavra	
	setbuf(stdin, 0);
	//lendo a palavra (string) com no máximo 15 espaços
	fgets (palavra, 15,stdin);
	
	// limpa casas não utilizadas
	palavra[strlen(palavra)-1] = '\0';
	
	printf(" %s\n", palavra);
	
	system ("pause");
	
	
	
	
	
	
}
