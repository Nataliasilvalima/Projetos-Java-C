#include<stdio.h>
#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

using namespace std; // para usar o std :: sem escrever toda vez ..sempre que o comando não estiver nas bibliotecas ele puxa o std:: automaticamente

int main(){
	
	std::string palavra;
	
	printf("digite uma palavra");
	
 	std::cin>> palavra; //lendo a palavra digitada pelo usuario
	std::cout<< "\n palavra eh:" <<palavra; // imprimindo e concatenar
	
	
	
	
	return 0;
}
