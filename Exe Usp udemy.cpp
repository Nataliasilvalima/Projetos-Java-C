#include<stdio.h>
#include<math.h>

// Dada uma seq��ncia de n�meros inteiros n�o-nulos, seguida por 0, imprimir seus quadrados.

int main(){
	
	int n;
	
	printf("Informe a quantidade de n�meros:\n");
	scanf("%d", &n);
		
	int vet[n];
	
	printf("Informe a sequ�ncia:\n");
	for(int i=0; i<n; i++){
	scanf("%d",&vet[i]);
}
    for (int j=0; j<n; j++){
    	vet [j]=pow(vet[j],2);
	printf("%d\t",vet[j]);
} 
    printf("\n");
	return 0;
}
