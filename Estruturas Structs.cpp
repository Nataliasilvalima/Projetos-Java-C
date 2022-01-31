#include<stdio.h>
#include<string.h>

//Cria um tipo especifico da palavra, inormando suas variaveis.
struct palavra{
	int ordem;
	char letra;
	char texto[200];
};

int main(){
//Cria uma variavel  com o tipo criado acima
	struct palavra primeirapalavra;
	
	primeirapalavra.ordem = 10;
	primeirapalavra.letra = 'c';
	strcpy (primeirapalavra.texto,"palavrinha");
	
	printf("Ordem: %d\n Primiera Letra: %c\n Palavra: %s\n", primeirapalavra.ordem, primeirapalavra.letra, primeirapalavra.texto);

//Criando um vetor de structs exemplo de lista	
	struct palavra listadepalavras[3];
	
	listadepalavras[0].ordem = 0;
	listadepalavras[1].ordem = 1;
	listadepalavras[2].ordem = 2;
	listadepalavras[0].letra = 'd';
	listadepalavras[1].letra = 'f';
	listadepalavras[2].letra = 'p';
	strcpy(listadepalavras[0].texto,"Dante");
	strcpy(listadepalavras[1].texto,"Dente");
	strcpy(listadepalavras[2].texto,"Danta");
	int cont;
	
	for(cont = 0; cont< 3; cont++){
		printf("Ordem: %d\n Primiera Letra: %c\n Palavra: %s\n", listadepalavras[cont].ordem, listadepalavras[cont].letra, listadepalavras[cont].texto);
}
	return 0;
}
