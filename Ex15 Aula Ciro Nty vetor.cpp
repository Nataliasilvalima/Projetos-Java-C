/*Escreva uma função de protótipo void init_vetor(int n, int a[], int val); que
inicialize o vetor a com n elementos com o valor de val.
*/

#include<stdio.h>

void int_vetor(int,int *a,int);
void imprime_vetor(int,int *a);

int main(){
	
	int n, val;

	printf("Informe o tamanho do vetor:");
	scanf("%d", &n);
	
    int vet[n];
    
	printf("informe o valor do vetor:");
	scanf("%d",&val);
	
	int_vetor(n,vet,val);
	
	imprime_vetor(n,vet);
		
	return 0;
}

void int_vetor(int num,int a[],int vlr){
	
	int i;
	for(i=0; i<num; i++){
		a[i]= vlr;
	}
}

void imprime_vetor (int num, int a[]){
	
	int i;
	for(i=0; i<num; i++){
		printf("%d\t",a[i]);
	}
}
