/*A fun��o floor, definida no arquivo math.h, arredonda seu argumento (um n�mero do tipo
double) para o maior inteiro que n�o seja maior que esse argumento, na pr�tica, isso significa
devolver a parte inteira do argumento. Entretanto, o valor de retorno da fun��o floor � um
double. Crie uma fun��o de prot�tipo int arredondar_para_int(double n); que
arredonda seu par�metro n para o inteiro mais pr�ximo. Dica: some 0.5 a n e utilize a fun��o
floor. Escreva um programa que leia v�rios n�meros e use a fun��o
arredondar_para_int para arredondar cada um desses n�meros para o inteiro mais
pr�ximo.
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
