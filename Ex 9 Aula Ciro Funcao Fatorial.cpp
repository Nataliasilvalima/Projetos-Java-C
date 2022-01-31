//Escreva uma função para calcular o fatorial de um número natural.

#include<stdio.h>

int fatorial (int);

int main(){
	
	int n;
	
	printf("Informe o numero natural:");
	scanf("%d",&n);
	
	fatorial(n);
	
	return 0;
}

int fatorial(int num){
	
	int fat=1;
	int numero = num;
//Toda vez que o laço passar pelo num sera diminuido -1 e multiplicado pelo fat.	
	for(;num>=1;num--){
		fat*=num;
	}
	
	printf("O fatorial de %d e %d",numero,fat);
}
