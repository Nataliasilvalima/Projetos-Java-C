#include<stdio.h>
#include<new>
#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct fruta{
	string cor;
	string nome;
	
};

int main(){

//Criando um ponteiro para alocar memoria
 fruta *primeirafruta = new fruta;
 
 primeirafruta->cor = "Amarela";
 primeirafruta->nome = "Banana";

//Imprimindo na tela 
	cout<<"Fruta:"<<primeirafruta->nome<<",Cor:"<<primeirafruta->cor;

	//Alocando memoria para o vetor
	fruta *ponteirolistadefruta = new fruta [2];
	//Criando um vetor
	ponteirolistadefruta[0].cor = "Vermelho";
	ponteirolistadefruta[0].nome = "Maça";
	ponteirolistadefruta[1].cor = "Verde";
	ponteirolistadefruta[1].nome = "Abacate";
	
	int cont;
	
	for (cont = 0; cont<2; cont++){
		cout<<"\nFruta:"<<ponteirolistadefruta[cont].nome<<",\nCor:"<<ponteirolistadefruta[cont].cor;
		
	}
	
	
	return 0;
}
