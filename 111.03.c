#include <stdio.h>
#include<stdlib.h>
#include <locale.h>
// Exercicio de explicação de vetores
void main(){
int vetor[ 4];
   	vetor [0]=10;
   	vetor [1]=9;
   	vetor [2]=8;
   	vetor [3]=7;
   	int cont, valor0, valor1, valor2, valor3;
   	
   	printf("%d %d %d %d\n",vetor[0],vetor[1], vetor[2], vetor[3]);
   
     for (cont = 0; cont < 4; cont++){
	 
   	printf("\n%d posição do vetor %d\n", cont, vetor[cont]);
   }	
   printf ("Digite o valor a ser acresentado");
   scanf("%d %d %d %d", &valor0,&valor1, &valor2, &valor3);
   
   vetor[0]= valor0;
   vetor[1]= valor1;
   vetor[2]= valor2;
   vetor[3]= valor3;
   
   printf("Os valores dos vetores agora são:");
   printf("%d %d %d %d\n",vetor[0],vetor[1], vetor[2], vetor[3]);
}
