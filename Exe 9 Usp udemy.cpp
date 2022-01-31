//Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir 
//em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.

#include<stdio.h>

int main(){
	
	int n,i,j,cont,num =0;
	
	printf("Informe a quantidade:");
	scanf("%d",&n);
	
	printf("Informe os numeros ie j:");
	scanf("%d",&i,&j);
	//Nao consegui achar o pq de naota puxando a quantidade informada
	for(cont=0;cont<=n;cont++){
		if(num%i==0 || num%j==0){
			printf("%d\t",num);
		 }num++;
	}
	printf("\n");
	return 0;
	
}
