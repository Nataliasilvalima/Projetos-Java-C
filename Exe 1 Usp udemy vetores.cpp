//Dada uma seq��ncia de n n�meros, imprimi-la na ordem inversa � da leitura.

#include<stdio.h>

int main(){
	
	int n;
	
	printf("Informe a quantidade de numeros:\n");
	scanf("%d",&n);
	
	int vet[n];
	
	printf("Informe os numeros:\n");
	for(int i=0;i<n;i++){
	scanf("%d",&vet[i]);
}
    printf("A ordem inversa e:");
    
	for(int i=n-1;i>=0;i--){
		printf("%d",vet[i]);
	}	
	return 0;
}
