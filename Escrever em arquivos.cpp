#include<stdio.h>
#include<string>
#include<fstream>

using namespace std;
 
int main(){
	
//Cria o objeto de arquivo
 ofstream coutfile;
 
 //Abre o arquivo ou cria caso nao exista
 coutfile.open("texto.txt", std::ios_base::app);
 
//Escrevendo dentro do arquivo
 coutfile<<"\nTe Amo";
 
 //Fecha o arquivo.
 coutfile.close(); 	
	
	
	return 0;
}
