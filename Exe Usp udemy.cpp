#include<stdio.h>
#include<math.h>

// Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.

int main(){
	
	int n;
	
	printf("Informe a quantidade de números:\n");
	scanf("%d", &n);
		
	int vet[n];
	
	printf("Informe a sequência:\n");
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
