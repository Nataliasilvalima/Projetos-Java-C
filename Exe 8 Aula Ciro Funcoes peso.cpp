/*Faça uma função que recebe, por parâmetro, a altura em metros (alt) e o sexo de uma pessoa e
retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7
x alt - 58 e ,para mulheres, peso ideal = 62.1 x alt - 44.7.
*/

#include<stdio.h>

double peso_ideal (double,int);

int main(){
	
	double altura;
	int sexo;
	
	
	printf("Informe sua altura:");
	scanf("%lf", &altura);
	
	printf("Informe seu sexo:\n Digite 1- Feminino\t ou\t 2- Masculino\n");
	scanf("%d",&sexo);
	
	peso_ideal(altura,sexo);
	
	return 0;
}

double peso_ideal (double alt,int gen){
	
	double peso;
	
	if(gen ==2){
	 printf("Seu peso ideal e %.2lf", peso =((72.7 * alt)-58));
	
	}
	else{
		printf("Seu peso ideal e %.2lf", peso = ((62.1*alt)-44.7));
	}
	
	return 0;
}
