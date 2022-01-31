/*Escreva uma funcao de prototipo double hipotenusa(double x, double y); que
calcula e devolve o comprimento da hipotenusa de um triangulo retangulo cujos catetos sao
dados pelos parametros x e y. Lembre-se que hipotenusa=ðÎ x2ðÄy2 . Dica: utilize a funcao
da questao anterior para obter os quadrados dos catetos e a funcao sqrt para obter a raiz
quadrada.
*/

#include<stdio.h>
#include<math.h>

double hipotenusa (double, double);

int main(){
	
    double x,y;

printf("Informe os numeros X e Y:\n");
scanf("%lf %lf", &x,&y);
	
	hipotenusa (x,y);
	
	return 0;
}
double hipotenusa (double x, double y){
	
	double total;
    total=	x*x + y*y;
	
	printf("O valor do comprimento da hipotenusa e %.2lf",sqrt(total));
	
	return 0;
}
