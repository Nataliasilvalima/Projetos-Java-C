/*Criar um programa que leia os elementos de um vetor de inteiros com 10 posi��es. Em seguida,
troque o 1� elemento pelo �ltimo, o 2� pelo pen�ltimo, o 3� pelo antepen�ltimo, e assim
sucessivamente. Mostre o vetor depois das trocas.*/
#include <stdio.h>

void main (){
	int vet[10], i,j;
	int  aux;
	
	printf("Informe os numeros\n");
	
	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);		
	}
	for(i=0, j=9; i<j; i++, j--){
      
      aux= vet[i];
      vet[i]= vet[j];
      vet[j] = aux;
  }
  
     printf("\n Os numeros apos as trocas");
  
      for(i=0; i<10; i++){
      	printf("\n %d ", vet[i]);
	  }



	}
	
