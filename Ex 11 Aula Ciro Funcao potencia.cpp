/*Criar uma fun��o para calcular xy, dados como par�metros x (um n�mero real) e y (um n�mero
natural). Restri��o: n�o � permitido utilizar a fun��o pow.
*/

#include<stdio.h>

double potencia( double, int);

int main(){

int natural;
double real;

printf("Informe os numeros X e Y:");
scanf("%lf %d", &real,&natural);

 	potencia (real,natural);

	return 0;
}
double potencia(double r, int n){
	
	int i;
	double total;
	for(i=0;i<=n;i++){
	total = r*r;	
	}
	 printf("O valor da potencia e %lf",total);
	 
	 return 0;
}
