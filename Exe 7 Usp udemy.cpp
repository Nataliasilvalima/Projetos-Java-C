 //Dados n e uma seq��ncia de n n�meros inteiros, determinar a soma dos n�meros pares.

#include<stdio.h>

int main(){
	
	int n,i,soma=0;
	
	printf("Informar a quantidade numeros:\n");
	scanf("%d",&n);
	
    for(i=0;i<n;i++){
    	if(i%2==0){
    		soma+=i;
		}
	}
	printf("A soma dos numeros pares e %d",soma);
	
	return 0;
	
}


