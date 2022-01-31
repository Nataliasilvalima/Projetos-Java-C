//Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
/*a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B */

#include<stdio.h>

int main(){
	
	double A , B , C;
	double pi = 3.14159;
	
	scanf("%lf" "%lf" "%lf", &A,&B, &C);
	
	printf("TRIANGULO: %.3lf\n",A*C/2.0);
	printf("CIRCULO: %.3lf\n",pi*C*C);
	printf("TRAPEZIO: %.3lf\n",(A+B)*C/2.0);
	printf("QUADRADO: %.3lf\n" ,B*B);
	printf("RETANGULO: %.3lf\n",A*B);
	
	return 0;
}
