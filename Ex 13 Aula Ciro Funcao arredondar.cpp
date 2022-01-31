/*A função floor, definida no arquivo math.h, arredonda seu argumento (um número do tipo
double) para o maior inteiro que não seja maior que esse argumento, na prática, isso significa
devolver a parte inteira do argumento. Entretanto, o valor de retorno da função floor é um
double. Crie uma função de protótipo int arredondar_para_int(double n); que
arredonda seu parâmetro n para o inteiro mais próximo. Dica: some 0.5 a n e utilize a função
floor. Escreva um programa que leia vários números e use a função
arredondar_para_int para arredondar cada um desses números para o inteiro mais
próximo.
*/

#include<stdio.h>
#include<math.h>

int* alocacaovetor(int);
int arredondar_para_int(double);

int main(){
	
	int tamanho,i;
	double *vetor
	
	printf("Informe a quantidade de numeros a serem digitados:");
	scanf("%d",&tamanho);
	
	vetor = alocacaovetor(tamanho);
	
	printf("Informe os numeros:");
	for (i=0;i<tamanho;i++){
	scanf("%lf",&vetor[i]);
}
	arrendondar_para_int(vetor);
	
	return 0;
}
int* alocacaovetor(int tamanho){
	
   int *aux;
   aux = (double*) malloc(tamanho * sizeof(double));
   
   return aux;
}



int arredondar_para_int(double vet[tamanho]){
	
	int j,cont, 
	for(j=0, j<tamanho;j++){
		vet[j]+=0.5;
	}
	for(cont=0; cont<tamanho;cont++){
		printf("%d\t", floor(vet[cont]));
	}
 return 0;
}
